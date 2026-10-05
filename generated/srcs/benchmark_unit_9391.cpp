#include "bench/fib.hpp"

// RE Benchmark TU 9391 of 20000 (depth=28, stamp="default")
namespace bench_tu_9391 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9391>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9391
