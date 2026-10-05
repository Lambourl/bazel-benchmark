#include "bench/fib.hpp"

// RE Benchmark TU 2680 of 20000 (depth=28, stamp="default")
namespace bench_tu_2680 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2680>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2680
