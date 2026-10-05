#include "bench/fib.hpp"

// RE Benchmark TU 17782 of 20000 (depth=28, stamp="default")
namespace bench_tu_17782 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17782>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17782
