#include "bench/fib.hpp"

// RE Benchmark TU 4025 of 20000 (depth=28, stamp="default")
namespace bench_tu_4025 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4025>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4025
