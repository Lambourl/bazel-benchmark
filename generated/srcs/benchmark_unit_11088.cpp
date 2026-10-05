#include "bench/fib.hpp"

// RE Benchmark TU 11088 of 20000 (depth=28, stamp="default")
namespace bench_tu_11088 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11088>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11088
