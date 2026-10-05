#include "bench/fib.hpp"

// RE Benchmark TU 19128 of 20000 (depth=28, stamp="default")
namespace bench_tu_19128 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19128>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19128
