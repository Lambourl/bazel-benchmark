#include "bench/fib.hpp"

// RE Benchmark TU 11567 of 20000 (depth=28, stamp="default")
namespace bench_tu_11567 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11567>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11567
