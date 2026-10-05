#include "bench/fib.hpp"

// RE Benchmark TU 9584 of 20000 (depth=28, stamp="default")
namespace bench_tu_9584 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9584>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9584
