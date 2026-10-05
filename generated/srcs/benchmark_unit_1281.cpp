#include "bench/fib.hpp"

// RE Benchmark TU 1281 of 20000 (depth=28, stamp="default")
namespace bench_tu_1281 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1281>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1281
