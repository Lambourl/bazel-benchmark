#include "bench/fib.hpp"

// RE Benchmark TU 18051 of 20000 (depth=28, stamp="default")
namespace bench_tu_18051 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18051>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18051
