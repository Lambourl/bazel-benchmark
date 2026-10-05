#include "bench/fib.hpp"

// RE Benchmark TU 3042 of 20000 (depth=28, stamp="default")
namespace bench_tu_3042 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3042>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3042
