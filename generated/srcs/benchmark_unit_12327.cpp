#include "bench/fib.hpp"

// RE Benchmark TU 12327 of 20000 (depth=28, stamp="default")
namespace bench_tu_12327 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12327>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12327
