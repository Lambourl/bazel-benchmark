#include "bench/fib.hpp"

// RE Benchmark TU 1471 of 20000 (depth=28, stamp="default")
namespace bench_tu_1471 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1471>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1471
