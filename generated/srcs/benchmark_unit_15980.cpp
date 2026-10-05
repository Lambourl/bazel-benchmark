#include "bench/fib.hpp"

// RE Benchmark TU 15980 of 20000 (depth=28, stamp="default")
namespace bench_tu_15980 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15980>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15980
