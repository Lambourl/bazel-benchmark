#include "bench/fib.hpp"

// RE Benchmark TU 15581 of 20000 (depth=28, stamp="default")
namespace bench_tu_15581 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15581>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15581
