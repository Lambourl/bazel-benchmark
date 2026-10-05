#include "bench/fib.hpp"

// RE Benchmark TU 3271 of 20000 (depth=28, stamp="default")
namespace bench_tu_3271 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3271>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3271
