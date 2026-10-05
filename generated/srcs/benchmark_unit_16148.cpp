#include "bench/fib.hpp"

// RE Benchmark TU 16148 of 20000 (depth=28, stamp="default")
namespace bench_tu_16148 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16148>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16148
