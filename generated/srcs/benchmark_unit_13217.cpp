#include "bench/fib.hpp"

// RE Benchmark TU 13217 of 20000 (depth=28, stamp="default")
namespace bench_tu_13217 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13217>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13217
