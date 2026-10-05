#include "bench/fib.hpp"

// RE Benchmark TU 292 of 20000 (depth=28, stamp="default")
namespace bench_tu_292 {
constexpr unsigned long long result = ::bench::slow_fib<28, 292>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_292
