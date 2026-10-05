#include "bench/fib.hpp"

// RE Benchmark TU 9090 of 20000 (depth=28, stamp="default")
namespace bench_tu_9090 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9090>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9090
