#include "bench/fib.hpp"

// RE Benchmark TU 2575 of 20000 (depth=28, stamp="default")
namespace bench_tu_2575 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2575>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2575
