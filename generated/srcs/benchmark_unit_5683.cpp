#include "bench/fib.hpp"

// RE Benchmark TU 5683 of 20000 (depth=28, stamp="default")
namespace bench_tu_5683 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5683>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5683
