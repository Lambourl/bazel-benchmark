#include "bench/fib.hpp"

// RE Benchmark TU 1673 of 20000 (depth=28, stamp="default")
namespace bench_tu_1673 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1673>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1673
