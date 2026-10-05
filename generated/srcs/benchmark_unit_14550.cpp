#include "bench/fib.hpp"

// RE Benchmark TU 14550 of 20000 (depth=28, stamp="default")
namespace bench_tu_14550 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14550>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14550
