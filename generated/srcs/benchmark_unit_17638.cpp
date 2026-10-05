#include "bench/fib.hpp"

// RE Benchmark TU 17638 of 20000 (depth=28, stamp="default")
namespace bench_tu_17638 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17638>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17638
