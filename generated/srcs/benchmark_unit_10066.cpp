#include "bench/fib.hpp"

// RE Benchmark TU 10066 of 20000 (depth=28, stamp="default")
namespace bench_tu_10066 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10066>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10066
