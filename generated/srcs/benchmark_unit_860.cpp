#include "bench/fib.hpp"

// RE Benchmark TU 860 of 20000 (depth=28, stamp="default")
namespace bench_tu_860 {
constexpr unsigned long long result = ::bench::slow_fib<28, 860>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_860
