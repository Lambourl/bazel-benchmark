#include "bench/fib.hpp"

// RE Benchmark TU 14338 of 20000 (depth=28, stamp="default")
namespace bench_tu_14338 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14338>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14338
