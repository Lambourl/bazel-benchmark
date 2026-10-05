#include "bench/fib.hpp"

// RE Benchmark TU 1757 of 20000 (depth=28, stamp="default")
namespace bench_tu_1757 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1757>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1757
