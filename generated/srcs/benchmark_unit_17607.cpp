#include "bench/fib.hpp"

// RE Benchmark TU 17607 of 20000 (depth=28, stamp="default")
namespace bench_tu_17607 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17607>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17607
