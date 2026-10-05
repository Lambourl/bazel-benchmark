#include "bench/fib.hpp"

// RE Benchmark TU 11640 of 20000 (depth=28, stamp="default")
namespace bench_tu_11640 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11640>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11640
