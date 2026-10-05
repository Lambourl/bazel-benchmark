#include "bench/fib.hpp"

// RE Benchmark TU 6493 of 20000 (depth=28, stamp="default")
namespace bench_tu_6493 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6493>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6493
