#include "bench/fib.hpp"

// RE Benchmark TU 15795 of 20000 (depth=28, stamp="default")
namespace bench_tu_15795 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15795>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15795
