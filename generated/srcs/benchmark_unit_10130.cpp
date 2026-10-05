#include "bench/fib.hpp"

// RE Benchmark TU 10130 of 20000 (depth=28, stamp="default")
namespace bench_tu_10130 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10130>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10130
