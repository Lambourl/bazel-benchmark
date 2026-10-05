#include "bench/fib.hpp"

// RE Benchmark TU 17837 of 20000 (depth=28, stamp="default")
namespace bench_tu_17837 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17837>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17837
