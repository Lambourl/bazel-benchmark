#include "bench/fib.hpp"

// RE Benchmark TU 1261 of 20000 (depth=28, stamp="default")
namespace bench_tu_1261 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1261>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1261
