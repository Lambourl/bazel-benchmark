#include "bench/fib.hpp"

// RE Benchmark TU 17068 of 20000 (depth=28, stamp="default")
namespace bench_tu_17068 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17068>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17068
