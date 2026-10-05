#include "bench/fib.hpp"

// RE Benchmark TU 11544 of 20000 (depth=28, stamp="default")
namespace bench_tu_11544 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11544>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11544
