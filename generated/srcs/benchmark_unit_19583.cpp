#include "bench/fib.hpp"

// RE Benchmark TU 19583 of 20000 (depth=28, stamp="default")
namespace bench_tu_19583 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19583>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19583
