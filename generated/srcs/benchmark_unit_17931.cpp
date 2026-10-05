#include "bench/fib.hpp"

// RE Benchmark TU 17931 of 20000 (depth=28, stamp="default")
namespace bench_tu_17931 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17931>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17931
