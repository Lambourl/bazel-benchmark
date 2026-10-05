#include "bench/fib.hpp"

// RE Benchmark TU 19613 of 20000 (depth=28, stamp="default")
namespace bench_tu_19613 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19613>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19613
