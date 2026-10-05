#include "bench/fib.hpp"

// RE Benchmark TU 801 of 20000 (depth=28, stamp="default")
namespace bench_tu_801 {
constexpr unsigned long long result = ::bench::slow_fib<28, 801>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_801
