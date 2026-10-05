#include "bench/fib.hpp"

// RE Benchmark TU 3688 of 20000 (depth=28, stamp="default")
namespace bench_tu_3688 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3688>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3688
