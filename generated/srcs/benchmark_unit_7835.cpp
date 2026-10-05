#include "bench/fib.hpp"

// RE Benchmark TU 7835 of 20000 (depth=28, stamp="default")
namespace bench_tu_7835 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7835>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7835
