#include "bench/fib.hpp"

// RE Benchmark TU 19208 of 20000 (depth=28, stamp="default")
namespace bench_tu_19208 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19208>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19208
