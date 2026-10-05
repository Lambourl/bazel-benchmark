#include "bench/fib.hpp"

// RE Benchmark TU 5583 of 20000 (depth=28, stamp="default")
namespace bench_tu_5583 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5583>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5583
