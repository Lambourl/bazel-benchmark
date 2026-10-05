#include "bench/fib.hpp"

// RE Benchmark TU 5224 of 20000 (depth=28, stamp="default")
namespace bench_tu_5224 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5224>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5224
