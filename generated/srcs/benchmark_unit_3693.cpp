#include "bench/fib.hpp"

// RE Benchmark TU 3693 of 20000 (depth=28, stamp="default")
namespace bench_tu_3693 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3693>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3693
