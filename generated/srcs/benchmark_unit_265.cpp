#include "bench/fib.hpp"

// RE Benchmark TU 265 of 20000 (depth=28, stamp="default")
namespace bench_tu_265 {
constexpr unsigned long long result = ::bench::slow_fib<28, 265>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_265
