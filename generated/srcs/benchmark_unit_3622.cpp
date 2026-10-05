#include "bench/fib.hpp"

// RE Benchmark TU 3622 of 20000 (depth=28, stamp="default")
namespace bench_tu_3622 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3622>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3622
