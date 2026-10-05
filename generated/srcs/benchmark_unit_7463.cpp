#include "bench/fib.hpp"

// RE Benchmark TU 7463 of 20000 (depth=28, stamp="default")
namespace bench_tu_7463 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7463>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7463
