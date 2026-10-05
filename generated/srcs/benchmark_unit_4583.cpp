#include "bench/fib.hpp"

// RE Benchmark TU 4583 of 20000 (depth=28, stamp="default")
namespace bench_tu_4583 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4583>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4583
