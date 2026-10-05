#include "bench/fib.hpp"

// RE Benchmark TU 15699 of 20000 (depth=28, stamp="default")
namespace bench_tu_15699 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15699>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15699
