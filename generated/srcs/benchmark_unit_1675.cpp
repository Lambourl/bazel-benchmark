#include "bench/fib.hpp"

// RE Benchmark TU 1675 of 20000 (depth=28, stamp="default")
namespace bench_tu_1675 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1675>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1675
