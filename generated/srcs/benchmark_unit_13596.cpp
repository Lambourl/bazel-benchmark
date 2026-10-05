#include "bench/fib.hpp"

// RE Benchmark TU 13596 of 20000 (depth=28, stamp="default")
namespace bench_tu_13596 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13596>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13596
