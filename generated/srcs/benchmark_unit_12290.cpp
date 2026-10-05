#include "bench/fib.hpp"

// RE Benchmark TU 12290 of 20000 (depth=28, stamp="default")
namespace bench_tu_12290 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12290>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12290
