#include "bench/fib.hpp"

// RE Benchmark TU 10563 of 20000 (depth=28, stamp="default")
namespace bench_tu_10563 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10563>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10563
