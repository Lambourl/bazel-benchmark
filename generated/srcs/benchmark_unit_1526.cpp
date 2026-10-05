#include "bench/fib.hpp"

// RE Benchmark TU 1526 of 20000 (depth=28, stamp="default")
namespace bench_tu_1526 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1526>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1526
