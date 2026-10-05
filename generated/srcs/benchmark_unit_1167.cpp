#include "bench/fib.hpp"

// RE Benchmark TU 1167 of 20000 (depth=28, stamp="default")
namespace bench_tu_1167 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1167>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1167
