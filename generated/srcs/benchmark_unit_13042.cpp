#include "bench/fib.hpp"

// RE Benchmark TU 13042 of 20000 (depth=28, stamp="default")
namespace bench_tu_13042 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13042>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13042
