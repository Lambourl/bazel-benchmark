#include "bench/fib.hpp"

// RE Benchmark TU 14343 of 20000 (depth=28, stamp="default")
namespace bench_tu_14343 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14343>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14343
