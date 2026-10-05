#include "bench/fib.hpp"

// RE Benchmark TU 3446 of 20000 (depth=28, stamp="default")
namespace bench_tu_3446 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3446>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3446
