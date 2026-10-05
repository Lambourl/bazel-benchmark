#include "bench/fib.hpp"

// RE Benchmark TU 760 of 20000 (depth=28, stamp="default")
namespace bench_tu_760 {
constexpr unsigned long long result = ::bench::slow_fib<28, 760>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_760
