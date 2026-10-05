#include "bench/fib.hpp"

// RE Benchmark TU 3581 of 20000 (depth=28, stamp="default")
namespace bench_tu_3581 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3581>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3581
