#include "bench/fib.hpp"

// RE Benchmark TU 13801 of 20000 (depth=28, stamp="default")
namespace bench_tu_13801 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13801>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13801
