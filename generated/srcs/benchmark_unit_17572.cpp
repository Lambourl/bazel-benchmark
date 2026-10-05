#include "bench/fib.hpp"

// RE Benchmark TU 17572 of 20000 (depth=28, stamp="default")
namespace bench_tu_17572 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17572>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17572
