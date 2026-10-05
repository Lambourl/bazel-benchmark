#include "bench/fib.hpp"

// RE Benchmark TU 11396 of 20000 (depth=28, stamp="default")
namespace bench_tu_11396 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11396>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11396
