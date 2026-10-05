#include "bench/fib.hpp"

// RE Benchmark TU 11760 of 20000 (depth=28, stamp="default")
namespace bench_tu_11760 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11760>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11760
