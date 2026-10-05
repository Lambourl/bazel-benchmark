#include "bench/fib.hpp"

// RE Benchmark TU 11700 of 20000 (depth=28, stamp="default")
namespace bench_tu_11700 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11700>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11700
