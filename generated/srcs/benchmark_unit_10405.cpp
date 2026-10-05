#include "bench/fib.hpp"

// RE Benchmark TU 10405 of 20000 (depth=28, stamp="default")
namespace bench_tu_10405 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10405>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10405
