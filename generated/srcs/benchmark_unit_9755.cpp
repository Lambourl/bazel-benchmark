#include "bench/fib.hpp"

// RE Benchmark TU 9755 of 20000 (depth=28, stamp="default")
namespace bench_tu_9755 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9755>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9755
