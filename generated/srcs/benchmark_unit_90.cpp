#include "bench/fib.hpp"

// RE Benchmark TU 90 of 20000 (depth=28, stamp="default")
namespace bench_tu_90 {
constexpr unsigned long long result = ::bench::slow_fib<28, 90>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_90
