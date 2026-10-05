#include "bench/fib.hpp"

// RE Benchmark TU 17311 of 20000 (depth=28, stamp="default")
namespace bench_tu_17311 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17311>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17311
