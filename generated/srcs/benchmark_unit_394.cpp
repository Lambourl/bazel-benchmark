#include "bench/fib.hpp"

// RE Benchmark TU 394 of 20000 (depth=28, stamp="default")
namespace bench_tu_394 {
constexpr unsigned long long result = ::bench::slow_fib<28, 394>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_394
