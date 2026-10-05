#include "bench/fib.hpp"

// RE Benchmark TU 10315 of 20000 (depth=28, stamp="default")
namespace bench_tu_10315 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10315>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10315
