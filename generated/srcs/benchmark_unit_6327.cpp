#include "bench/fib.hpp"

// RE Benchmark TU 6327 of 20000 (depth=28, stamp="default")
namespace bench_tu_6327 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6327>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6327
