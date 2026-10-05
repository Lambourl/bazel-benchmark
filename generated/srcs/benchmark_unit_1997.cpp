#include "bench/fib.hpp"

// RE Benchmark TU 1997 of 20000 (depth=28, stamp="default")
namespace bench_tu_1997 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1997>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1997
