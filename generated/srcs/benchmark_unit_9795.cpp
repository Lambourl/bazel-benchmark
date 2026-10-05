#include "bench/fib.hpp"

// RE Benchmark TU 9795 of 20000 (depth=28, stamp="default")
namespace bench_tu_9795 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9795>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9795
