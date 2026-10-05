#include "bench/fib.hpp"

// RE Benchmark TU 9638 of 20000 (depth=28, stamp="default")
namespace bench_tu_9638 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9638>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9638
