#include "bench/fib.hpp"

// RE Benchmark TU 9911 of 20000 (depth=28, stamp="default")
namespace bench_tu_9911 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9911>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9911
