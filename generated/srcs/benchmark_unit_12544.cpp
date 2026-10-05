#include "bench/fib.hpp"

// RE Benchmark TU 12544 of 20000 (depth=28, stamp="default")
namespace bench_tu_12544 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12544>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12544
