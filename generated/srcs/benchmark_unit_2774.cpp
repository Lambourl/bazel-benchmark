#include "bench/fib.hpp"

// RE Benchmark TU 2774 of 20000 (depth=28, stamp="default")
namespace bench_tu_2774 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2774>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2774
