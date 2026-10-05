#include "bench/fib.hpp"

// RE Benchmark TU 9449 of 20000 (depth=28, stamp="default")
namespace bench_tu_9449 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9449>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9449
