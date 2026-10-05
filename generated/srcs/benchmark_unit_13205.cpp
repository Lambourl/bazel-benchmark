#include "bench/fib.hpp"

// RE Benchmark TU 13205 of 20000 (depth=28, stamp="default")
namespace bench_tu_13205 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13205>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13205
