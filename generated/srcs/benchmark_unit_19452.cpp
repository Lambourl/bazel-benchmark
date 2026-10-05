#include "bench/fib.hpp"

// RE Benchmark TU 19452 of 20000 (depth=28, stamp="default")
namespace bench_tu_19452 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19452>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19452
