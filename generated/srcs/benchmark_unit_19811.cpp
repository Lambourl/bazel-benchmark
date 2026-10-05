#include "bench/fib.hpp"

// RE Benchmark TU 19811 of 20000 (depth=28, stamp="default")
namespace bench_tu_19811 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19811>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19811
