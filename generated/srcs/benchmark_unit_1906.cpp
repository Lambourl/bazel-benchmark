#include "bench/fib.hpp"

// RE Benchmark TU 1906 of 20000 (depth=28, stamp="default")
namespace bench_tu_1906 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1906>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1906
