#include "bench/fib.hpp"

// RE Benchmark TU 9455 of 20000 (depth=28, stamp="default")
namespace bench_tu_9455 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9455>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9455
