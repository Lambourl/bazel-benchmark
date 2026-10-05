#include "bench/fib.hpp"

// RE Benchmark TU 12845 of 20000 (depth=28, stamp="default")
namespace bench_tu_12845 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12845>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12845
