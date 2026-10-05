#include "bench/fib.hpp"

// RE Benchmark TU 2316 of 20000 (depth=28, stamp="default")
namespace bench_tu_2316 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2316>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2316
