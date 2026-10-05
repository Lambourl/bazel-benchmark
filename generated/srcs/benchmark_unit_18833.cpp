#include "bench/fib.hpp"

// RE Benchmark TU 18833 of 20000 (depth=28, stamp="default")
namespace bench_tu_18833 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18833>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18833
