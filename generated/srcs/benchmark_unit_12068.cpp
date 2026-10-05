#include "bench/fib.hpp"

// RE Benchmark TU 12068 of 20000 (depth=28, stamp="default")
namespace bench_tu_12068 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12068>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12068
