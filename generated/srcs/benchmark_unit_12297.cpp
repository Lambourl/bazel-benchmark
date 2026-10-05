#include "bench/fib.hpp"

// RE Benchmark TU 12297 of 20000 (depth=28, stamp="default")
namespace bench_tu_12297 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12297>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12297
