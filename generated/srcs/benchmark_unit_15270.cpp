#include "bench/fib.hpp"

// RE Benchmark TU 15270 of 20000 (depth=28, stamp="default")
namespace bench_tu_15270 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15270>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15270
