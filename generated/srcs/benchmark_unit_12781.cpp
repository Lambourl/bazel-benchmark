#include "bench/fib.hpp"

// RE Benchmark TU 12781 of 20000 (depth=28, stamp="default")
namespace bench_tu_12781 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12781>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12781
