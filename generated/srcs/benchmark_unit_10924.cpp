#include "bench/fib.hpp"

// RE Benchmark TU 10924 of 20000 (depth=28, stamp="default")
namespace bench_tu_10924 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10924>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10924
