#include "bench/fib.hpp"

// RE Benchmark TU 1637 of 20000 (depth=28, stamp="default")
namespace bench_tu_1637 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1637>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1637
