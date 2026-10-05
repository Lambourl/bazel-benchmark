#include "bench/fib.hpp"

// RE Benchmark TU 7745 of 20000 (depth=28, stamp="default")
namespace bench_tu_7745 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7745>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7745
