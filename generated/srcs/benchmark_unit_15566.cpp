#include "bench/fib.hpp"

// RE Benchmark TU 15566 of 20000 (depth=28, stamp="default")
namespace bench_tu_15566 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15566>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15566
