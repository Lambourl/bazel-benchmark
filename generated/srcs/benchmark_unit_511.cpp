#include "bench/fib.hpp"

// RE Benchmark TU 511 of 20000 (depth=28, stamp="default")
namespace bench_tu_511 {
constexpr unsigned long long result = ::bench::slow_fib<28, 511>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_511
