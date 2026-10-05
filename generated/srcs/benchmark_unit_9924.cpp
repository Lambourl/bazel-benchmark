#include "bench/fib.hpp"

// RE Benchmark TU 9924 of 20000 (depth=28, stamp="default")
namespace bench_tu_9924 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9924>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9924
