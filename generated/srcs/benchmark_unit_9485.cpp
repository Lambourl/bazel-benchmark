#include "bench/fib.hpp"

// RE Benchmark TU 9485 of 20000 (depth=28, stamp="default")
namespace bench_tu_9485 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9485>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9485
