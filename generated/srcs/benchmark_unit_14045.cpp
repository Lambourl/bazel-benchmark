#include "bench/fib.hpp"

// RE Benchmark TU 14045 of 20000 (depth=28, stamp="default")
namespace bench_tu_14045 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14045>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14045
