#include "bench/fib.hpp"

// RE Benchmark TU 18673 of 20000 (depth=28, stamp="default")
namespace bench_tu_18673 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18673>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18673
