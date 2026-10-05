#include "bench/fib.hpp"

// RE Benchmark TU 10033 of 20000 (depth=28, stamp="default")
namespace bench_tu_10033 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10033>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10033
