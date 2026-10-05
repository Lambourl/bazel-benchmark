#include "bench/fib.hpp"

// RE Benchmark TU 1650 of 20000 (depth=28, stamp="default")
namespace bench_tu_1650 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1650>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1650
