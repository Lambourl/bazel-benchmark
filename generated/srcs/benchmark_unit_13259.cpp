#include "bench/fib.hpp"

// RE Benchmark TU 13259 of 20000 (depth=28, stamp="default")
namespace bench_tu_13259 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13259>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13259
