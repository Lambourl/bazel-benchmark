#include "bench/fib.hpp"

// RE Benchmark TU 1270 of 20000 (depth=28, stamp="default")
namespace bench_tu_1270 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1270>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1270
