#include "bench/fib.hpp"

// RE Benchmark TU 10896 of 20000 (depth=28, stamp="default")
namespace bench_tu_10896 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10896>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10896
