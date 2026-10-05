#include "bench/fib.hpp"

// RE Benchmark TU 10617 of 20000 (depth=28, stamp="default")
namespace bench_tu_10617 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10617>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10617
