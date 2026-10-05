#include "bench/fib.hpp"

// RE Benchmark TU 443 of 20000 (depth=28, stamp="default")
namespace bench_tu_443 {
constexpr unsigned long long result = ::bench::slow_fib<28, 443>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_443
