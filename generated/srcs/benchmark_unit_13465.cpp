#include "bench/fib.hpp"

// RE Benchmark TU 13465 of 20000 (depth=28, stamp="default")
namespace bench_tu_13465 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13465>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13465
