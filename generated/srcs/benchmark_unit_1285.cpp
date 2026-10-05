#include "bench/fib.hpp"

// RE Benchmark TU 1285 of 20000 (depth=28, stamp="default")
namespace bench_tu_1285 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1285>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1285
