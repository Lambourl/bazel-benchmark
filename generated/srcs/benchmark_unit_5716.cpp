#include "bench/fib.hpp"

// RE Benchmark TU 5716 of 20000 (depth=28, stamp="default")
namespace bench_tu_5716 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5716>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5716
