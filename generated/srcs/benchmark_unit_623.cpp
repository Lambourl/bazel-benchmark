#include "bench/fib.hpp"

// RE Benchmark TU 623 of 20000 (depth=28, stamp="default")
namespace bench_tu_623 {
constexpr unsigned long long result = ::bench::slow_fib<28, 623>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_623
