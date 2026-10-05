#include "bench/fib.hpp"

// RE Benchmark TU 1468 of 20000 (depth=28, stamp="default")
namespace bench_tu_1468 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1468>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1468
