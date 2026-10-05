#include "bench/fib.hpp"

// RE Benchmark TU 448 of 20000 (depth=28, stamp="default")
namespace bench_tu_448 {
constexpr unsigned long long result = ::bench::slow_fib<28, 448>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_448
