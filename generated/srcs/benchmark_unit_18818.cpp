#include "bench/fib.hpp"

// RE Benchmark TU 18818 of 20000 (depth=28, stamp="default")
namespace bench_tu_18818 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18818>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18818
