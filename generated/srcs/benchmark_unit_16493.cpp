#include "bench/fib.hpp"

// RE Benchmark TU 16493 of 20000 (depth=28, stamp="default")
namespace bench_tu_16493 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16493>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16493
