#include "bench/fib.hpp"

// RE Benchmark TU 19553 of 20000 (depth=28, stamp="default")
namespace bench_tu_19553 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19553>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19553
