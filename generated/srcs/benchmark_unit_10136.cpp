#include "bench/fib.hpp"

// RE Benchmark TU 10136 of 20000 (depth=28, stamp="default")
namespace bench_tu_10136 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10136>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10136
