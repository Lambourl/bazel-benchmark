#include "bench/fib.hpp"

// RE Benchmark TU 13202 of 20000 (depth=28, stamp="default")
namespace bench_tu_13202 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13202>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13202
