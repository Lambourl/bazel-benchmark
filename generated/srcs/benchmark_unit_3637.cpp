#include "bench/fib.hpp"

// RE Benchmark TU 3637 of 20000 (depth=28, stamp="default")
namespace bench_tu_3637 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3637>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3637
