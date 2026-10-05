#include "bench/fib.hpp"

// RE Benchmark TU 9678 of 20000 (depth=28, stamp="default")
namespace bench_tu_9678 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9678>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9678
