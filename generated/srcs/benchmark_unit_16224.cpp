#include "bench/fib.hpp"

// RE Benchmark TU 16224 of 20000 (depth=28, stamp="default")
namespace bench_tu_16224 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16224>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16224
