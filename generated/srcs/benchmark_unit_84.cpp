#include "bench/fib.hpp"

// RE Benchmark TU 84 of 20000 (depth=28, stamp="default")
namespace bench_tu_84 {
constexpr unsigned long long result = ::bench::slow_fib<28, 84>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_84
