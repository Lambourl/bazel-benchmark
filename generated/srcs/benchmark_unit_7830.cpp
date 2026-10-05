#include "bench/fib.hpp"

// RE Benchmark TU 7830 of 20000 (depth=28, stamp="default")
namespace bench_tu_7830 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7830>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7830
