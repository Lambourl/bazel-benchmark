#include "bench/fib.hpp"

// RE Benchmark TU 7390 of 20000 (depth=28, stamp="default")
namespace bench_tu_7390 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7390>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7390
