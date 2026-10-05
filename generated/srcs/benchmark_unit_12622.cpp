#include "bench/fib.hpp"

// RE Benchmark TU 12622 of 20000 (depth=28, stamp="default")
namespace bench_tu_12622 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12622>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12622
