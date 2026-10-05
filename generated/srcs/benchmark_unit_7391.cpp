#include "bench/fib.hpp"

// RE Benchmark TU 7391 of 20000 (depth=28, stamp="default")
namespace bench_tu_7391 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7391>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7391
