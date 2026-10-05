#include "bench/fib.hpp"

// RE Benchmark TU 9130 of 20000 (depth=28, stamp="default")
namespace bench_tu_9130 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9130>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9130
