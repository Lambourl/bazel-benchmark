#include "bench/fib.hpp"

// RE Benchmark TU 4574 of 20000 (depth=28, stamp="default")
namespace bench_tu_4574 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4574>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4574
