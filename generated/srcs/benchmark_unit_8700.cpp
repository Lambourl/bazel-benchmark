#include "bench/fib.hpp"

// RE Benchmark TU 8700 of 20000 (depth=28, stamp="default")
namespace bench_tu_8700 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8700>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8700
