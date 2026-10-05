#include "bench/fib.hpp"

// RE Benchmark TU 341 of 20000 (depth=28, stamp="default")
namespace bench_tu_341 {
constexpr unsigned long long result = ::bench::slow_fib<28, 341>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_341
