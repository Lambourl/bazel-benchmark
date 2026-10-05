#include "bench/fib.hpp"

// RE Benchmark TU 3120 of 20000 (depth=28, stamp="default")
namespace bench_tu_3120 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3120>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3120
