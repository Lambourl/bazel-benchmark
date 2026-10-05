#include "bench/fib.hpp"

// RE Benchmark TU 4405 of 20000 (depth=28, stamp="default")
namespace bench_tu_4405 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4405>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4405
