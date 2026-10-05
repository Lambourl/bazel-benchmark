#include "bench/fib.hpp"

// RE Benchmark TU 1591 of 20000 (depth=28, stamp="default")
namespace bench_tu_1591 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1591>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1591
