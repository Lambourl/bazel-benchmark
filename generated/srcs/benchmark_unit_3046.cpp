#include "bench/fib.hpp"

// RE Benchmark TU 3046 of 20000 (depth=28, stamp="default")
namespace bench_tu_3046 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3046>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3046
