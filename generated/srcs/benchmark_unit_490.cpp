#include "bench/fib.hpp"

// RE Benchmark TU 490 of 20000 (depth=28, stamp="default")
namespace bench_tu_490 {
constexpr unsigned long long result = ::bench::slow_fib<28, 490>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_490
