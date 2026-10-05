#include "bench/fib.hpp"

// RE Benchmark TU 1895 of 20000 (depth=28, stamp="default")
namespace bench_tu_1895 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1895>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1895
