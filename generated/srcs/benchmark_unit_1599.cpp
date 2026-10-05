#include "bench/fib.hpp"

// RE Benchmark TU 1599 of 20000 (depth=28, stamp="default")
namespace bench_tu_1599 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1599>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1599
