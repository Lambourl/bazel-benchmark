#include "bench/fib.hpp"

// RE Benchmark TU 10552 of 20000 (depth=28, stamp="default")
namespace bench_tu_10552 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10552>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10552
