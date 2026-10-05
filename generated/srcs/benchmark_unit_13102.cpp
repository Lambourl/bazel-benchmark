#include "bench/fib.hpp"

// RE Benchmark TU 13102 of 20000 (depth=28, stamp="default")
namespace bench_tu_13102 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13102>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13102
