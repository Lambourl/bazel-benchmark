#include "bench/fib.hpp"

// RE Benchmark TU 1366 of 20000 (depth=28, stamp="default")
namespace bench_tu_1366 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1366>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1366
