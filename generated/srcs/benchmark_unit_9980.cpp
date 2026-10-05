#include "bench/fib.hpp"

// RE Benchmark TU 9980 of 20000 (depth=28, stamp="default")
namespace bench_tu_9980 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9980>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9980
