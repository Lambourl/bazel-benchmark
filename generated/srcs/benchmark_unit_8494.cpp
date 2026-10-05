#include "bench/fib.hpp"

// RE Benchmark TU 8494 of 20000 (depth=28, stamp="default")
namespace bench_tu_8494 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8494>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8494
