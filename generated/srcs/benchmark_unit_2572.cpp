#include "bench/fib.hpp"

// RE Benchmark TU 2572 of 20000 (depth=28, stamp="default")
namespace bench_tu_2572 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2572>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2572
