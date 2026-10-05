#include "bench/fib.hpp"

// RE Benchmark TU 11520 of 20000 (depth=28, stamp="default")
namespace bench_tu_11520 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11520>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11520
