#include "bench/fib.hpp"

// RE Benchmark TU 10801 of 20000 (depth=28, stamp="default")
namespace bench_tu_10801 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10801>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10801
