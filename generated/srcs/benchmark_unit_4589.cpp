#include "bench/fib.hpp"

// RE Benchmark TU 4589 of 20000 (depth=28, stamp="default")
namespace bench_tu_4589 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4589>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4589
