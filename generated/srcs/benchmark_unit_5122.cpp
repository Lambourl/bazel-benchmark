#include "bench/fib.hpp"

// RE Benchmark TU 5122 of 20000 (depth=28, stamp="default")
namespace bench_tu_5122 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5122>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5122
