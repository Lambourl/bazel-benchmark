#include "bench/fib.hpp"

// RE Benchmark TU 16619 of 20000 (depth=28, stamp="default")
namespace bench_tu_16619 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16619>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16619
