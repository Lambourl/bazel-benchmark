#include "bench/fib.hpp"

// RE Benchmark TU 8515 of 20000 (depth=28, stamp="default")
namespace bench_tu_8515 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8515>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8515
