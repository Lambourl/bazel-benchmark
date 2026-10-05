#include "bench/fib.hpp"

// RE Benchmark TU 15139 of 20000 (depth=28, stamp="default")
namespace bench_tu_15139 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15139>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15139
