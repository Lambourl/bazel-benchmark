#include "bench/fib.hpp"

// RE Benchmark TU 407 of 20000 (depth=28, stamp="default")
namespace bench_tu_407 {
constexpr unsigned long long result = ::bench::slow_fib<28, 407>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_407
