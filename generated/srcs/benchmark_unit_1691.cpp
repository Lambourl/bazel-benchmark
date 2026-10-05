#include "bench/fib.hpp"

// RE Benchmark TU 1691 of 20000 (depth=28, stamp="default")
namespace bench_tu_1691 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1691>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1691
