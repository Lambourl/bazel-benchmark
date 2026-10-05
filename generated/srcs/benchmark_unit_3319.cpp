#include "bench/fib.hpp"

// RE Benchmark TU 3319 of 20000 (depth=28, stamp="default")
namespace bench_tu_3319 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3319>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3319
