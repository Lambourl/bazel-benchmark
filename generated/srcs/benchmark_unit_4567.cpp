#include "bench/fib.hpp"

// RE Benchmark TU 4567 of 20000 (depth=28, stamp="default")
namespace bench_tu_4567 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4567>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4567
