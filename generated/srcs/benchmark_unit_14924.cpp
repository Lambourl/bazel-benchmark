#include "bench/fib.hpp"

// RE Benchmark TU 14924 of 20000 (depth=28, stamp="default")
namespace bench_tu_14924 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14924>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14924
