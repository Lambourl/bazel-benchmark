#include "bench/fib.hpp"

// RE Benchmark TU 397 of 20000 (depth=28, stamp="default")
namespace bench_tu_397 {
constexpr unsigned long long result = ::bench::slow_fib<28, 397>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_397
