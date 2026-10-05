#include "bench/fib.hpp"

// RE Benchmark TU 9524 of 20000 (depth=28, stamp="default")
namespace bench_tu_9524 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9524>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9524
