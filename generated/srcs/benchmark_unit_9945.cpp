#include "bench/fib.hpp"

// RE Benchmark TU 9945 of 20000 (depth=28, stamp="default")
namespace bench_tu_9945 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9945>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9945
