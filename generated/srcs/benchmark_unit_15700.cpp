#include "bench/fib.hpp"

// RE Benchmark TU 15700 of 20000 (depth=28, stamp="default")
namespace bench_tu_15700 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15700>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15700
