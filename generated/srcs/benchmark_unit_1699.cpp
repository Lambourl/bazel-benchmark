#include "bench/fib.hpp"

// RE Benchmark TU 1699 of 20000 (depth=28, stamp="default")
namespace bench_tu_1699 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1699>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1699
