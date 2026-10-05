#include "bench/fib.hpp"

// RE Benchmark TU 1379 of 20000 (depth=28, stamp="default")
namespace bench_tu_1379 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1379>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1379
