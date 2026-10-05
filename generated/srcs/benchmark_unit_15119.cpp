#include "bench/fib.hpp"

// RE Benchmark TU 15119 of 20000 (depth=28, stamp="default")
namespace bench_tu_15119 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15119>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15119
