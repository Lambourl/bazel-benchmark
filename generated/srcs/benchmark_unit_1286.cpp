#include "bench/fib.hpp"

// RE Benchmark TU 1286 of 20000 (depth=28, stamp="default")
namespace bench_tu_1286 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1286>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1286
