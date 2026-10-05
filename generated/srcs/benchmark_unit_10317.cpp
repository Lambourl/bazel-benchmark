#include "bench/fib.hpp"

// RE Benchmark TU 10317 of 20000 (depth=28, stamp="default")
namespace bench_tu_10317 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10317>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10317
