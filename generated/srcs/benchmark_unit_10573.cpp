#include "bench/fib.hpp"

// RE Benchmark TU 10573 of 20000 (depth=28, stamp="default")
namespace bench_tu_10573 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10573>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10573
