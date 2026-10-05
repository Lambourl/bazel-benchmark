#include "bench/fib.hpp"

// RE Benchmark TU 6893 of 20000 (depth=28, stamp="default")
namespace bench_tu_6893 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6893>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6893
