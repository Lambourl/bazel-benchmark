#include "bench/fib.hpp"

// RE Benchmark TU 864 of 20000 (depth=28, stamp="default")
namespace bench_tu_864 {
constexpr unsigned long long result = ::bench::slow_fib<28, 864>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_864
