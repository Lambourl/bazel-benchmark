#include "bench/fib.hpp"

// RE Benchmark TU 16292 of 20000 (depth=28, stamp="default")
namespace bench_tu_16292 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16292>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16292
