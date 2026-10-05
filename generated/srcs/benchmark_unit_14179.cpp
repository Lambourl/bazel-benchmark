#include "bench/fib.hpp"

// RE Benchmark TU 14179 of 20000 (depth=28, stamp="default")
namespace bench_tu_14179 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14179>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14179
