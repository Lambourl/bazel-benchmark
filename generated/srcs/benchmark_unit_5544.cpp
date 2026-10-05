#include "bench/fib.hpp"

// RE Benchmark TU 5544 of 20000 (depth=28, stamp="default")
namespace bench_tu_5544 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5544>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5544
