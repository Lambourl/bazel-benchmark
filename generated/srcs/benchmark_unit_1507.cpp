#include "bench/fib.hpp"

// RE Benchmark TU 1507 of 20000 (depth=28, stamp="default")
namespace bench_tu_1507 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1507>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1507
