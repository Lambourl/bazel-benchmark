#include "bench/fib.hpp"

// RE Benchmark TU 10712 of 20000 (depth=28, stamp="default")
namespace bench_tu_10712 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10712>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10712
