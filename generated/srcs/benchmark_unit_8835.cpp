#include "bench/fib.hpp"

// RE Benchmark TU 8835 of 20000 (depth=28, stamp="default")
namespace bench_tu_8835 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8835>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8835
