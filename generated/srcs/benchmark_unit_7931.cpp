#include "bench/fib.hpp"

// RE Benchmark TU 7931 of 20000 (depth=28, stamp="default")
namespace bench_tu_7931 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7931>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7931
