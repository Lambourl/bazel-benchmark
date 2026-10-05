#include "bench/fib.hpp"

// RE Benchmark TU 15787 of 20000 (depth=28, stamp="default")
namespace bench_tu_15787 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15787>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15787
