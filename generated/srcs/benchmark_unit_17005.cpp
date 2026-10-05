#include "bench/fib.hpp"

// RE Benchmark TU 17005 of 20000 (depth=28, stamp="default")
namespace bench_tu_17005 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17005>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17005
