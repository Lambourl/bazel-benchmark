#include "bench/fib.hpp"

// RE Benchmark TU 17257 of 20000 (depth=28, stamp="default")
namespace bench_tu_17257 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17257>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17257
