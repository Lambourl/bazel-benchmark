#include "bench/fib.hpp"

// RE Benchmark TU 18871 of 20000 (depth=28, stamp="default")
namespace bench_tu_18871 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18871>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18871
