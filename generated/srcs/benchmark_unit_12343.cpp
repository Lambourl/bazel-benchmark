#include "bench/fib.hpp"

// RE Benchmark TU 12343 of 20000 (depth=28, stamp="default")
namespace bench_tu_12343 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12343>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12343
