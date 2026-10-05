#include "bench/fib.hpp"

// RE Benchmark TU 12143 of 20000 (depth=28, stamp="default")
namespace bench_tu_12143 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12143>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12143
