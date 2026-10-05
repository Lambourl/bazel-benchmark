#include "bench/fib.hpp"

// RE Benchmark TU 12658 of 20000 (depth=28, stamp="default")
namespace bench_tu_12658 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12658>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12658
