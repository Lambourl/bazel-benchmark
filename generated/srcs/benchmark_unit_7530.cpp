#include "bench/fib.hpp"

// RE Benchmark TU 7530 of 20000 (depth=28, stamp="default")
namespace bench_tu_7530 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7530>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7530
