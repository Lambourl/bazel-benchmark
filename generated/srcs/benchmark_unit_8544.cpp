#include "bench/fib.hpp"

// RE Benchmark TU 8544 of 20000 (depth=28, stamp="default")
namespace bench_tu_8544 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8544>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8544
