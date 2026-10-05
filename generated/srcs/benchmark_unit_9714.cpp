#include "bench/fib.hpp"

// RE Benchmark TU 9714 of 20000 (depth=28, stamp="default")
namespace bench_tu_9714 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9714>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9714
