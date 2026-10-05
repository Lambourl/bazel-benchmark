#include "bench/fib.hpp"

// RE Benchmark TU 561 of 20000 (depth=28, stamp="default")
namespace bench_tu_561 {
constexpr unsigned long long result = ::bench::slow_fib<28, 561>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_561
