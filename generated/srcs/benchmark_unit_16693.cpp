#include "bench/fib.hpp"

// RE Benchmark TU 16693 of 20000 (depth=28, stamp="default")
namespace bench_tu_16693 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16693>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16693
