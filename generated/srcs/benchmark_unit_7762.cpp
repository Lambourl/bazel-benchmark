#include "bench/fib.hpp"

// RE Benchmark TU 7762 of 20000 (depth=28, stamp="default")
namespace bench_tu_7762 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7762>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7762
