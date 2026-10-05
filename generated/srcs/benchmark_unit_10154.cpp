#include "bench/fib.hpp"

// RE Benchmark TU 10154 of 20000 (depth=28, stamp="default")
namespace bench_tu_10154 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10154>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10154
