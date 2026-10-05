#include "bench/fib.hpp"

// RE Benchmark TU 4563 of 20000 (depth=28, stamp="default")
namespace bench_tu_4563 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4563>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4563
