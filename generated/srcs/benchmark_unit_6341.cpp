#include "bench/fib.hpp"

// RE Benchmark TU 6341 of 20000 (depth=28, stamp="default")
namespace bench_tu_6341 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6341>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6341
