#include "bench/fib.hpp"

// RE Benchmark TU 10013 of 20000 (depth=28, stamp="default")
namespace bench_tu_10013 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10013>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10013
