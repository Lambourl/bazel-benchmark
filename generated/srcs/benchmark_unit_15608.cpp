#include "bench/fib.hpp"

// RE Benchmark TU 15608 of 20000 (depth=28, stamp="default")
namespace bench_tu_15608 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15608>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15608
