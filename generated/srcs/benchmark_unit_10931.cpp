#include "bench/fib.hpp"

// RE Benchmark TU 10931 of 20000 (depth=28, stamp="default")
namespace bench_tu_10931 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10931>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10931
