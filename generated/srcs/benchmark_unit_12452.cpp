#include "bench/fib.hpp"

// RE Benchmark TU 12452 of 20000 (depth=28, stamp="default")
namespace bench_tu_12452 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12452>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12452
