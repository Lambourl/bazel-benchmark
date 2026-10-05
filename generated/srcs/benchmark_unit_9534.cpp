#include "bench/fib.hpp"

// RE Benchmark TU 9534 of 20000 (depth=28, stamp="default")
namespace bench_tu_9534 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9534>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9534
