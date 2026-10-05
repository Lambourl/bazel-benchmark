#include "bench/fib.hpp"

// RE Benchmark TU 12901 of 20000 (depth=28, stamp="default")
namespace bench_tu_12901 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12901>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12901
