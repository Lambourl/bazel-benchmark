#include "bench/fib.hpp"

// RE Benchmark TU 5537 of 20000 (depth=28, stamp="default")
namespace bench_tu_5537 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5537>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5537
