#include "bench/fib.hpp"

// RE Benchmark TU 13338 of 20000 (depth=28, stamp="default")
namespace bench_tu_13338 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13338>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13338
