#include "bench/fib.hpp"

// RE Benchmark TU 4497 of 20000 (depth=28, stamp="default")
namespace bench_tu_4497 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4497>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4497
