#include "bench/fib.hpp"

// RE Benchmark TU 6447 of 20000 (depth=28, stamp="default")
namespace bench_tu_6447 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6447>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6447
