#include "bench/fib.hpp"

// RE Benchmark TU 10837 of 20000 (depth=28, stamp="default")
namespace bench_tu_10837 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10837>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10837
