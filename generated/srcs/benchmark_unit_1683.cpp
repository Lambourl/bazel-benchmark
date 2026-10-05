#include "bench/fib.hpp"

// RE Benchmark TU 1683 of 20000 (depth=28, stamp="default")
namespace bench_tu_1683 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1683>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1683
