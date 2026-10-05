#include "bench/fib.hpp"

// RE Benchmark TU 12473 of 20000 (depth=28, stamp="default")
namespace bench_tu_12473 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12473>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12473
