#include "bench/fib.hpp"

// RE Benchmark TU 1713 of 20000 (depth=28, stamp="default")
namespace bench_tu_1713 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1713>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1713
