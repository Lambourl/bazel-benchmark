#include "bench/fib.hpp"

// RE Benchmark TU 762 of 20000 (depth=28, stamp="default")
namespace bench_tu_762 {
constexpr unsigned long long result = ::bench::slow_fib<28, 762>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_762
