#include "bench/fib.hpp"

// RE Benchmark TU 14366 of 20000 (depth=28, stamp="default")
namespace bench_tu_14366 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14366>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14366
