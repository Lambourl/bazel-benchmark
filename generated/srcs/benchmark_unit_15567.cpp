#include "bench/fib.hpp"

// RE Benchmark TU 15567 of 20000 (depth=28, stamp="default")
namespace bench_tu_15567 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15567>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15567
