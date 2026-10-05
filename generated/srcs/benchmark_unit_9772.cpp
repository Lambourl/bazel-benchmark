#include "bench/fib.hpp"

// RE Benchmark TU 9772 of 20000 (depth=28, stamp="default")
namespace bench_tu_9772 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9772>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9772
