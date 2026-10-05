#include "bench/fib.hpp"

// RE Benchmark TU 1563 of 20000 (depth=28, stamp="default")
namespace bench_tu_1563 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1563>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1563
