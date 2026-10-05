#include "bench/fib.hpp"

// RE Benchmark TU 9634 of 20000 (depth=28, stamp="default")
namespace bench_tu_9634 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9634>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9634
