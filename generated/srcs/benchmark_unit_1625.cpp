#include "bench/fib.hpp"

// RE Benchmark TU 1625 of 20000 (depth=28, stamp="default")
namespace bench_tu_1625 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1625>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1625
