#include "bench/fib.hpp"

// RE Benchmark TU 11656 of 20000 (depth=28, stamp="default")
namespace bench_tu_11656 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11656>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11656
