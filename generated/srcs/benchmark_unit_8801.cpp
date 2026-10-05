#include "bench/fib.hpp"

// RE Benchmark TU 8801 of 20000 (depth=28, stamp="default")
namespace bench_tu_8801 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8801>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8801
