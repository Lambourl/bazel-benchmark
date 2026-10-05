#include "bench/fib.hpp"

// RE Benchmark TU 18504 of 20000 (depth=28, stamp="default")
namespace bench_tu_18504 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18504>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18504
