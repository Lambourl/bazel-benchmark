#include "bench/fib.hpp"

// RE Benchmark TU 10246 of 20000 (depth=28, stamp="default")
namespace bench_tu_10246 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10246>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10246
