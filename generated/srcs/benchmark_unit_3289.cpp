#include "bench/fib.hpp"

// RE Benchmark TU 3289 of 20000 (depth=28, stamp="default")
namespace bench_tu_3289 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3289>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3289
