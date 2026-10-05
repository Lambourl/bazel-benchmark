#include "bench/fib.hpp"

// RE Benchmark TU 3687 of 20000 (depth=28, stamp="default")
namespace bench_tu_3687 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3687>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3687
