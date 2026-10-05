#include "bench/fib.hpp"

// RE Benchmark TU 3673 of 20000 (depth=28, stamp="default")
namespace bench_tu_3673 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3673>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3673
