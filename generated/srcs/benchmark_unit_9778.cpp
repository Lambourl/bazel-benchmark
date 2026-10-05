#include "bench/fib.hpp"

// RE Benchmark TU 9778 of 20000 (depth=28, stamp="default")
namespace bench_tu_9778 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9778>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9778
