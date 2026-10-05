#include "bench/fib.hpp"

// RE Benchmark TU 11884 of 20000 (depth=28, stamp="default")
namespace bench_tu_11884 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11884>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11884
