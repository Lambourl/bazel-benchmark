#include "bench/fib.hpp"

// RE Benchmark TU 10359 of 20000 (depth=28, stamp="default")
namespace bench_tu_10359 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10359>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10359
