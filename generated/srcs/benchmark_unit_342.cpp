#include "bench/fib.hpp"

// RE Benchmark TU 342 of 20000 (depth=28, stamp="default")
namespace bench_tu_342 {
constexpr unsigned long long result = ::bench::slow_fib<28, 342>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_342
