#include "bench/fib.hpp"

// RE Benchmark TU 15457 of 20000 (depth=28, stamp="default")
namespace bench_tu_15457 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15457>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15457
