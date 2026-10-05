#include "bench/fib.hpp"

// RE Benchmark TU 9547 of 20000 (depth=28, stamp="default")
namespace bench_tu_9547 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9547>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9547
