#include "bench/fib.hpp"

// RE Benchmark TU 9507 of 20000 (depth=28, stamp="default")
namespace bench_tu_9507 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9507>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9507
