#include "bench/fib.hpp"

// RE Benchmark TU 6556 of 20000 (depth=28, stamp="default")
namespace bench_tu_6556 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6556>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6556
