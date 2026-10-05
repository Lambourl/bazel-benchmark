#include "bench/fib.hpp"

// RE Benchmark TU 14054 of 20000 (depth=28, stamp="default")
namespace bench_tu_14054 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14054>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14054
