#include "bench/fib.hpp"

// RE Benchmark TU 12533 of 20000 (depth=28, stamp="default")
namespace bench_tu_12533 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12533>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12533
