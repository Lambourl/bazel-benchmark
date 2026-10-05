#include "bench/fib.hpp"

// RE Benchmark TU 5594 of 20000 (depth=28, stamp="default")
namespace bench_tu_5594 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5594>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5594
