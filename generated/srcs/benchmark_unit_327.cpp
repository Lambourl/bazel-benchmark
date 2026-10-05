#include "bench/fib.hpp"

// RE Benchmark TU 327 of 20000 (depth=28, stamp="default")
namespace bench_tu_327 {
constexpr unsigned long long result = ::bench::slow_fib<28, 327>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_327
