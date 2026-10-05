#include "bench/fib.hpp"

// RE Benchmark TU 2515 of 20000 (depth=28, stamp="default")
namespace bench_tu_2515 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2515>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2515
