#include "bench/fib.hpp"

// RE Benchmark TU 9457 of 20000 (depth=28, stamp="default")
namespace bench_tu_9457 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9457>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9457
