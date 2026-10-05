#include "bench/fib.hpp"

// RE Benchmark TU 6727 of 20000 (depth=28, stamp="default")
namespace bench_tu_6727 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6727>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6727
