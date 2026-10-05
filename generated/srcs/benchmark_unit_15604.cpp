#include "bench/fib.hpp"

// RE Benchmark TU 15604 of 20000 (depth=28, stamp="default")
namespace bench_tu_15604 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15604>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15604
