#include "bench/fib.hpp"

// RE Benchmark TU 499 of 20000 (depth=28, stamp="default")
namespace bench_tu_499 {
constexpr unsigned long long result = ::bench::slow_fib<28, 499>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_499
