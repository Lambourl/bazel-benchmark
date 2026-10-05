#include "bench/fib.hpp"

// RE Benchmark TU 5592 of 20000 (depth=28, stamp="default")
namespace bench_tu_5592 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5592>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5592
