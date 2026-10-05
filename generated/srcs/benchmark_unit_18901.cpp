#include "bench/fib.hpp"

// RE Benchmark TU 18901 of 20000 (depth=28, stamp="default")
namespace bench_tu_18901 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18901>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18901
