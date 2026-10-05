#include "bench/fib.hpp"

// RE Benchmark TU 10046 of 20000 (depth=28, stamp="default")
namespace bench_tu_10046 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10046>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10046
