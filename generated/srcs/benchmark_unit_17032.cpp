#include "bench/fib.hpp"

// RE Benchmark TU 17032 of 20000 (depth=28, stamp="default")
namespace bench_tu_17032 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17032>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17032
