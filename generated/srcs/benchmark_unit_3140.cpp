#include "bench/fib.hpp"

// RE Benchmark TU 3140 of 20000 (depth=28, stamp="default")
namespace bench_tu_3140 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3140>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3140
