#include "bench/fib.hpp"

// RE Benchmark TU 5471 of 20000 (depth=28, stamp="default")
namespace bench_tu_5471 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5471>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5471
