#include "bench/fib.hpp"

// RE Benchmark TU 12453 of 20000 (depth=28, stamp="default")
namespace bench_tu_12453 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12453>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12453
