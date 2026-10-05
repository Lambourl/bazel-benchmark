#include "bench/fib.hpp"

// RE Benchmark TU 7575 of 20000 (depth=28, stamp="default")
namespace bench_tu_7575 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7575>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7575
