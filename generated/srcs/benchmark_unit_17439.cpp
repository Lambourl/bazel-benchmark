#include "bench/fib.hpp"

// RE Benchmark TU 17439 of 20000 (depth=28, stamp="default")
namespace bench_tu_17439 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17439>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17439
