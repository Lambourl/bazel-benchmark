#include "bench/fib.hpp"

// RE Benchmark TU 9488 of 20000 (depth=28, stamp="default")
namespace bench_tu_9488 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9488>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9488
