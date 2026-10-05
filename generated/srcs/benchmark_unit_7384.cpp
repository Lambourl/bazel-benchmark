#include "bench/fib.hpp"

// RE Benchmark TU 7384 of 20000 (depth=28, stamp="default")
namespace bench_tu_7384 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7384>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7384
