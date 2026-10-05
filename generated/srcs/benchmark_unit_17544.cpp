#include "bench/fib.hpp"

// RE Benchmark TU 17544 of 20000 (depth=28, stamp="default")
namespace bench_tu_17544 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17544>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17544
