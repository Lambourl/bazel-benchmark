#include "bench/fib.hpp"

// RE Benchmark TU 16223 of 20000 (depth=28, stamp="default")
namespace bench_tu_16223 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16223>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16223
