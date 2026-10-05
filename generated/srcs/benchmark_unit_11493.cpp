#include "bench/fib.hpp"

// RE Benchmark TU 11493 of 20000 (depth=28, stamp="default")
namespace bench_tu_11493 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11493>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11493
