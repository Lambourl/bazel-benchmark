#include "bench/fib.hpp"

// RE Benchmark TU 8520 of 20000 (depth=28, stamp="default")
namespace bench_tu_8520 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8520>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8520
