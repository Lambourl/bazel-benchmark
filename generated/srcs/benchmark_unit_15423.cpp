#include "bench/fib.hpp"

// RE Benchmark TU 15423 of 20000 (depth=28, stamp="default")
namespace bench_tu_15423 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15423>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15423
