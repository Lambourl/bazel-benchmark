#include "bench/fib.hpp"

// RE Benchmark TU 9152 of 20000 (depth=28, stamp="default")
namespace bench_tu_9152 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9152>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9152
