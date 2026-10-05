#include "bench/fib.hpp"

// RE Benchmark TU 5602 of 20000 (depth=28, stamp="default")
namespace bench_tu_5602 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5602>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5602
