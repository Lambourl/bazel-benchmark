#include "bench/fib.hpp"

// RE Benchmark TU 411 of 20000 (depth=28, stamp="default")
namespace bench_tu_411 {
constexpr unsigned long long result = ::bench::slow_fib<28, 411>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_411
