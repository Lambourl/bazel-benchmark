#include "bench/fib.hpp"

// RE Benchmark TU 1856 of 20000 (depth=28, stamp="default")
namespace bench_tu_1856 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1856>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1856
