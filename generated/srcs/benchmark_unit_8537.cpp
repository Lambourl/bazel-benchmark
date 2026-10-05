#include "bench/fib.hpp"

// RE Benchmark TU 8537 of 20000 (depth=28, stamp="default")
namespace bench_tu_8537 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8537>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8537
