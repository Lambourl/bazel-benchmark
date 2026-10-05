#include "bench/fib.hpp"

// RE Benchmark TU 18567 of 20000 (depth=28, stamp="default")
namespace bench_tu_18567 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18567>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18567
