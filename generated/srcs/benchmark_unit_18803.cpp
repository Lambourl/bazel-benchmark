#include "bench/fib.hpp"

// RE Benchmark TU 18803 of 20000 (depth=28, stamp="default")
namespace bench_tu_18803 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18803>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18803
