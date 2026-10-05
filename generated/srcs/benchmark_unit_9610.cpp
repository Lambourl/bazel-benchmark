#include "bench/fib.hpp"

// RE Benchmark TU 9610 of 20000 (depth=28, stamp="default")
namespace bench_tu_9610 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9610>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9610
