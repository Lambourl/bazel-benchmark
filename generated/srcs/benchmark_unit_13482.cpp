#include "bench/fib.hpp"

// RE Benchmark TU 13482 of 20000 (depth=28, stamp="default")
namespace bench_tu_13482 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13482>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13482
