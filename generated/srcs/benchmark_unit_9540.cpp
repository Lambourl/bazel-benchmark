#include "bench/fib.hpp"

// RE Benchmark TU 9540 of 20000 (depth=28, stamp="default")
namespace bench_tu_9540 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9540>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9540
