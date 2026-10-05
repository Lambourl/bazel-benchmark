#include "bench/fib.hpp"

// RE Benchmark TU 12429 of 20000 (depth=28, stamp="default")
namespace bench_tu_12429 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12429>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12429
