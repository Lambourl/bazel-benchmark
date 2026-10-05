#include "bench/fib.hpp"

// RE Benchmark TU 494 of 20000 (depth=28, stamp="default")
namespace bench_tu_494 {
constexpr unsigned long long result = ::bench::slow_fib<28, 494>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_494
