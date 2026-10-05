#include "bench/fib.hpp"

// RE Benchmark TU 2263 of 20000 (depth=28, stamp="default")
namespace bench_tu_2263 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2263>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2263
