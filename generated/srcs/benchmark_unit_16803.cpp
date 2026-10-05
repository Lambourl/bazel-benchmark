#include "bench/fib.hpp"

// RE Benchmark TU 16803 of 20000 (depth=28, stamp="default")
namespace bench_tu_16803 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16803>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16803
