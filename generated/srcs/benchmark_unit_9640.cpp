#include "bench/fib.hpp"

// RE Benchmark TU 9640 of 20000 (depth=28, stamp="default")
namespace bench_tu_9640 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9640>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9640
