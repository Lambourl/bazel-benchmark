#include "bench/fib.hpp"

// RE Benchmark TU 9394 of 20000 (depth=28, stamp="default")
namespace bench_tu_9394 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9394>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9394
