#include "bench/fib.hpp"

// RE Benchmark TU 450 of 20000 (depth=28, stamp="default")
namespace bench_tu_450 {
constexpr unsigned long long result = ::bench::slow_fib<28, 450>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_450
