#include "bench/fib.hpp"

// RE Benchmark TU 4257 of 20000 (depth=28, stamp="default")
namespace bench_tu_4257 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4257>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4257
