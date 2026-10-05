#include "bench/fib.hpp"

// RE Benchmark TU 16497 of 20000 (depth=28, stamp="default")
namespace bench_tu_16497 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16497>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16497
