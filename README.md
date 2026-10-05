# luc_next_test — Bazel Remote-Execution Load Test

Self-contained Bazel workspace with **20,000 translation units**, each
deliberately expensive to compile. Commit this whole folder as-is and run Bazel
on it to start benchmarking a distributed build / remote-execution cluster.

## Why each TU is slow

Every generated `.cpp` instantiates a compile-time **Fibonacci template suite**
(`include/bench/fib.hpp`). Each recursive branch carries a unique `Tag` type, so
the compiler cannot memoize — forcing ~`φ^depth` template instantiations of
real, non-cacheable work per TU.

These units are generated at **depth 28**. Measured cost with LLVM/clang:

| depth | time / TU | peak RAM / TU |
|------:|----------:|--------------:|
| 26    | ~3.8 s    | ~1.0 GB       |
| **28**| **~10.5 s** | **~2.7 GB** | ← this folder
| 30    | ~29 s     | ~7 GB         |

20,000 × ~10.5 s ≈ **~58 hours serial**, fanned out across the cluster.

> **RAM is the binding constraint.** At ~2.7 GB peak per compile, each
> concurrently running core needs ~2.7 GB free. Size `--jobs` so that
> `jobs × 2.7 GB` fits worker memory, or clang will get OOM-killed.

## Build

```sh
cd luc_next_test

# Everything (the big one):
bazel build //...

# Just the benchmark executable (links all 20k TUs):
bazel build //app:main
```

## Distributed / remote execution

Fill in the endpoint + credentials in the `remote` profile of `.bazelrc`, then:

```sh
bazel build //... --config=remote --jobs=10000
```

For EngFlow / mTLS clusters, uncomment the `--tls_client_certificate`,
`--tls_client_key`, and `--remote_instance_name` lines in `.bazelrc`.

Remote-cache-only (local execution, remote cache — good for cache-hit testing):

```sh
bazel build //... --config=cache
```

## Rescaling / regenerating

```sh
python3 tools/generate_tus.py --count 20000 --depth 28 --stamp default
```

- `--count`  number of translation units.
- `--depth`  Fibonacci template depth (compile cost grows ~`φ^depth`).
- `--stamp`  change it to force a cold rebuild (busts the cache); keep it
  constant to measure **cache hits**.

## macOS note

Local builds with Apple clang trip Bazel's "absolute path inclusion"
hermeticity check (the system SDK pulls in `SDKSettings.json` via an absolute
path). This does **not** affect Linux remote-execution workers, the intended
target. Build on Linux or against your remote executor.
# bazel-benchmark
