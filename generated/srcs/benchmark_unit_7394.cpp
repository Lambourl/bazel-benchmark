#include "bench/fib.hpp"

// RE Benchmark TU 7394 of 20000 (depth=28, stamp="default")
namespace bench_tu_7394 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7394>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7394
