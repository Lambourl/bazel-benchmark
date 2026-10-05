#include "bench/fib.hpp"

// RE Benchmark TU 451 of 20000 (depth=28, stamp="default")
namespace bench_tu_451 {
constexpr unsigned long long result = ::bench::slow_fib<28, 451>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_451
