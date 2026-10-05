#include "bench/fib.hpp"

// RE Benchmark TU 9577 of 20000 (depth=28, stamp="default")
namespace bench_tu_9577 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9577>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9577
