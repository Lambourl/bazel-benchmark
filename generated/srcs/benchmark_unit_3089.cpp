#include "bench/fib.hpp"

// RE Benchmark TU 3089 of 20000 (depth=28, stamp="default")
namespace bench_tu_3089 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3089>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3089
