#include "bench/fib.hpp"

// RE Benchmark TU 9629 of 20000 (depth=28, stamp="default")
namespace bench_tu_9629 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9629>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9629
