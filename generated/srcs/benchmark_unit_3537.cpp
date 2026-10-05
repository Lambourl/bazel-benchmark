#include "bench/fib.hpp"

// RE Benchmark TU 3537 of 20000 (depth=28, stamp="default")
namespace bench_tu_3537 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3537>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3537
