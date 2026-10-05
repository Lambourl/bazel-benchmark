#include "bench/fib.hpp"

// RE Benchmark TU 10447 of 20000 (depth=28, stamp="default")
namespace bench_tu_10447 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10447>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10447
