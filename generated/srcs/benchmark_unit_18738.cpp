#include "bench/fib.hpp"

// RE Benchmark TU 18738 of 20000 (depth=28, stamp="default")
namespace bench_tu_18738 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18738>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18738
