#include "bench/fib.hpp"

// RE Benchmark TU 789 of 20000 (depth=28, stamp="default")
namespace bench_tu_789 {
constexpr unsigned long long result = ::bench::slow_fib<28, 789>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_789
