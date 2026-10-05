#include "bench/fib.hpp"

// RE Benchmark TU 3789 of 20000 (depth=28, stamp="default")
namespace bench_tu_3789 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3789>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3789
