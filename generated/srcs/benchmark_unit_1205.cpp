#include "bench/fib.hpp"

// RE Benchmark TU 1205 of 20000 (depth=28, stamp="default")
namespace bench_tu_1205 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1205>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1205
