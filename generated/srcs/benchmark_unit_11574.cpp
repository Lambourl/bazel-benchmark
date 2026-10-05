#include "bench/fib.hpp"

// RE Benchmark TU 11574 of 20000 (depth=28, stamp="default")
namespace bench_tu_11574 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11574>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11574
