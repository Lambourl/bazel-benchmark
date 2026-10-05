#include "bench/fib.hpp"

// RE Benchmark TU 8217 of 20000 (depth=28, stamp="default")
namespace bench_tu_8217 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8217>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8217
