#include "bench/fib.hpp"

// RE Benchmark TU 9240 of 20000 (depth=28, stamp="default")
namespace bench_tu_9240 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9240>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9240
