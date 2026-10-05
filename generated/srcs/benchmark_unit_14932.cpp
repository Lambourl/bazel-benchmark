#include "bench/fib.hpp"

// RE Benchmark TU 14932 of 20000 (depth=28, stamp="default")
namespace bench_tu_14932 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14932>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14932
