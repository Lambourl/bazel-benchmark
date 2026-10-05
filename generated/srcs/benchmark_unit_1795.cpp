#include "bench/fib.hpp"

// RE Benchmark TU 1795 of 20000 (depth=28, stamp="default")
namespace bench_tu_1795 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1795>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1795
