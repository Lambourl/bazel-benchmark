#include "bench/fib.hpp"

// RE Benchmark TU 1217 of 20000 (depth=28, stamp="default")
namespace bench_tu_1217 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1217>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1217
