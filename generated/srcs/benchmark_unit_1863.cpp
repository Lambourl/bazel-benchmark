#include "bench/fib.hpp"

// RE Benchmark TU 1863 of 20000 (depth=28, stamp="default")
namespace bench_tu_1863 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1863>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1863
