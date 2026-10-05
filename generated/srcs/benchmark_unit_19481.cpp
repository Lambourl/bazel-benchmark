#include "bench/fib.hpp"

// RE Benchmark TU 19481 of 20000 (depth=28, stamp="default")
namespace bench_tu_19481 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19481>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19481
