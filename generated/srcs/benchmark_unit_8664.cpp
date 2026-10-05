#include "bench/fib.hpp"

// RE Benchmark TU 8664 of 20000 (depth=28, stamp="default")
namespace bench_tu_8664 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8664>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8664
