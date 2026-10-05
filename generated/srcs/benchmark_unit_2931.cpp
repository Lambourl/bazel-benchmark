#include "bench/fib.hpp"

// RE Benchmark TU 2931 of 20000 (depth=28, stamp="default")
namespace bench_tu_2931 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2931>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2931
