#include "bench/fib.hpp"

// RE Benchmark TU 5762 of 20000 (depth=28, stamp="default")
namespace bench_tu_5762 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5762>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5762
