#include "bench/fib.hpp"

// RE Benchmark TU 10716 of 20000 (depth=28, stamp="default")
namespace bench_tu_10716 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10716>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10716
