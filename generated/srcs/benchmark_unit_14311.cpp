#include "bench/fib.hpp"

// RE Benchmark TU 14311 of 20000 (depth=28, stamp="default")
namespace bench_tu_14311 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14311>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14311
