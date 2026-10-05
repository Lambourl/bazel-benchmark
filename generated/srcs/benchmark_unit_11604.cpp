#include "bench/fib.hpp"

// RE Benchmark TU 11604 of 20000 (depth=28, stamp="default")
namespace bench_tu_11604 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11604>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11604
