#include "bench/fib.hpp"

// RE Benchmark TU 10564 of 20000 (depth=28, stamp="default")
namespace bench_tu_10564 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10564>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10564
