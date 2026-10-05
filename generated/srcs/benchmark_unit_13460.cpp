#include "bench/fib.hpp"

// RE Benchmark TU 13460 of 20000 (depth=28, stamp="default")
namespace bench_tu_13460 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13460>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13460
