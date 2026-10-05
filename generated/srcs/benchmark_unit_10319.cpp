#include "bench/fib.hpp"

// RE Benchmark TU 10319 of 20000 (depth=28, stamp="default")
namespace bench_tu_10319 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10319>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10319
