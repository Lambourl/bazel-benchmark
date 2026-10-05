#include "bench/fib.hpp"

// RE Benchmark TU 16447 of 20000 (depth=28, stamp="default")
namespace bench_tu_16447 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16447>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16447
