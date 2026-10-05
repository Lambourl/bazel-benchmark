#include "bench/fib.hpp"

// RE Benchmark TU 9311 of 20000 (depth=28, stamp="default")
namespace bench_tu_9311 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9311>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9311
