#include "bench/fib.hpp"

// RE Benchmark TU 12643 of 20000 (depth=28, stamp="default")
namespace bench_tu_12643 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12643>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12643
