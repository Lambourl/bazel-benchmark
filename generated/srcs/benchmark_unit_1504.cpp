#include "bench/fib.hpp"

// RE Benchmark TU 1504 of 20000 (depth=28, stamp="default")
namespace bench_tu_1504 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1504>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1504
