#include "bench/fib.hpp"

// RE Benchmark TU 16122 of 20000 (depth=28, stamp="default")
namespace bench_tu_16122 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16122>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16122
