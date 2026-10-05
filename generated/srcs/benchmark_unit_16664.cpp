#include "bench/fib.hpp"

// RE Benchmark TU 16664 of 20000 (depth=28, stamp="default")
namespace bench_tu_16664 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16664>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16664
