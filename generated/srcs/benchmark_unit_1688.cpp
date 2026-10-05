#include "bench/fib.hpp"

// RE Benchmark TU 1688 of 20000 (depth=28, stamp="default")
namespace bench_tu_1688 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1688>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1688
