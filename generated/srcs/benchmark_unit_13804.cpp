#include "bench/fib.hpp"

// RE Benchmark TU 13804 of 20000 (depth=28, stamp="default")
namespace bench_tu_13804 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13804>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13804
