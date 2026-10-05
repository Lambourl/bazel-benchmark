#include "bench/fib.hpp"

// RE Benchmark TU 1013 of 20000 (depth=28, stamp="default")
namespace bench_tu_1013 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1013>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1013
