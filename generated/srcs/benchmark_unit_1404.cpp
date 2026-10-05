#include "bench/fib.hpp"

// RE Benchmark TU 1404 of 20000 (depth=28, stamp="default")
namespace bench_tu_1404 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1404>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1404
