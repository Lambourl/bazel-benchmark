#include "bench/fib.hpp"

// RE Benchmark TU 1671 of 20000 (depth=28, stamp="default")
namespace bench_tu_1671 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1671>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1671
