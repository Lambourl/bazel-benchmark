#include "bench/fib.hpp"

// RE Benchmark TU 10795 of 20000 (depth=28, stamp="default")
namespace bench_tu_10795 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10795>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10795
