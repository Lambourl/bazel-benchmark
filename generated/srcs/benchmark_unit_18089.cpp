#include "bench/fib.hpp"

// RE Benchmark TU 18089 of 20000 (depth=28, stamp="default")
namespace bench_tu_18089 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18089>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18089
