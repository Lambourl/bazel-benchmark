#include "bench/fib.hpp"

// RE Benchmark TU 18373 of 20000 (depth=28, stamp="default")
namespace bench_tu_18373 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18373>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18373
