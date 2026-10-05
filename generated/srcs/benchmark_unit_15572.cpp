#include "bench/fib.hpp"

// RE Benchmark TU 15572 of 20000 (depth=28, stamp="default")
namespace bench_tu_15572 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15572>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15572
