#include "bench/fib.hpp"

// RE Benchmark TU 13051 of 20000 (depth=28, stamp="default")
namespace bench_tu_13051 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13051>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13051
