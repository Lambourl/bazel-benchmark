#include "bench/fib.hpp"

// RE Benchmark TU 10403 of 20000 (depth=28, stamp="default")
namespace bench_tu_10403 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10403>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10403
