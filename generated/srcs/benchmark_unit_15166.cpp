#include "bench/fib.hpp"

// RE Benchmark TU 15166 of 20000 (depth=28, stamp="default")
namespace bench_tu_15166 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15166>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15166
