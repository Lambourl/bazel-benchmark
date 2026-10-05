#include "bench/fib.hpp"

// RE Benchmark TU 9553 of 20000 (depth=28, stamp="default")
namespace bench_tu_9553 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9553>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9553
