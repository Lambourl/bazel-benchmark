#include "bench/fib.hpp"

// RE Benchmark TU 18085 of 20000 (depth=28, stamp="default")
namespace bench_tu_18085 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18085>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18085
