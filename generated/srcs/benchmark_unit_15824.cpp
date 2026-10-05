#include "bench/fib.hpp"

// RE Benchmark TU 15824 of 20000 (depth=28, stamp="default")
namespace bench_tu_15824 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15824>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15824
