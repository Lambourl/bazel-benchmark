#include "bench/fib.hpp"

// RE Benchmark TU 1457 of 20000 (depth=28, stamp="default")
namespace bench_tu_1457 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1457>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1457
