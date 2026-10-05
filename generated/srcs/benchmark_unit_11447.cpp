#include "bench/fib.hpp"

// RE Benchmark TU 11447 of 20000 (depth=28, stamp="default")
namespace bench_tu_11447 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11447>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11447
