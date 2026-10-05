#include "bench/fib.hpp"

// RE Benchmark TU 12583 of 20000 (depth=28, stamp="default")
namespace bench_tu_12583 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12583>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12583
