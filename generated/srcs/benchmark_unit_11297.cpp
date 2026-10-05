#include "bench/fib.hpp"

// RE Benchmark TU 11297 of 20000 (depth=28, stamp="default")
namespace bench_tu_11297 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11297>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11297
