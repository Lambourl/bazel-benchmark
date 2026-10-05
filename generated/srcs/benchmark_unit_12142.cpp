#include "bench/fib.hpp"

// RE Benchmark TU 12142 of 20000 (depth=28, stamp="default")
namespace bench_tu_12142 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12142>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12142
