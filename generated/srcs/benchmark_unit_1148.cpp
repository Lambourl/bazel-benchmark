#include "bench/fib.hpp"

// RE Benchmark TU 1148 of 20000 (depth=28, stamp="default")
namespace bench_tu_1148 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1148>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1148
