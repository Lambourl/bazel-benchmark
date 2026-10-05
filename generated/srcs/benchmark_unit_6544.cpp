#include "bench/fib.hpp"

// RE Benchmark TU 6544 of 20000 (depth=28, stamp="default")
namespace bench_tu_6544 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6544>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6544
