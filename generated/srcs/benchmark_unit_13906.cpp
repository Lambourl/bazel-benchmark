#include "bench/fib.hpp"

// RE Benchmark TU 13906 of 20000 (depth=28, stamp="default")
namespace bench_tu_13906 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13906>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13906
