#include "bench/fib.hpp"

// RE Benchmark TU 1327 of 20000 (depth=28, stamp="default")
namespace bench_tu_1327 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1327>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1327
