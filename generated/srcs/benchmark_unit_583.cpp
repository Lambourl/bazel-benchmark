#include "bench/fib.hpp"

// RE Benchmark TU 583 of 20000 (depth=28, stamp="default")
namespace bench_tu_583 {
constexpr unsigned long long result = ::bench::slow_fib<28, 583>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_583
