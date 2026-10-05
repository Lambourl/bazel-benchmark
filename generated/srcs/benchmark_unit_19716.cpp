#include "bench/fib.hpp"

// RE Benchmark TU 19716 of 20000 (depth=28, stamp="default")
namespace bench_tu_19716 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19716>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19716
