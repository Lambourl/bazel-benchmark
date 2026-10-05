#include "bench/fib.hpp"

// RE Benchmark TU 1752 of 20000 (depth=28, stamp="default")
namespace bench_tu_1752 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1752>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1752
