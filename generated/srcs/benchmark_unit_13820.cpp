#include "bench/fib.hpp"

// RE Benchmark TU 13820 of 20000 (depth=28, stamp="default")
namespace bench_tu_13820 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13820>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13820
