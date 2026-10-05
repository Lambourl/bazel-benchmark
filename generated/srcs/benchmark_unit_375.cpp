#include "bench/fib.hpp"

// RE Benchmark TU 375 of 20000 (depth=28, stamp="default")
namespace bench_tu_375 {
constexpr unsigned long long result = ::bench::slow_fib<28, 375>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_375
