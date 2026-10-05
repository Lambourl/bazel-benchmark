#include "bench/fib.hpp"

// RE Benchmark TU 15450 of 20000 (depth=28, stamp="default")
namespace bench_tu_15450 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15450>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15450
