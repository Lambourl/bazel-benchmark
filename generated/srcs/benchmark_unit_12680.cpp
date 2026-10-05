#include "bench/fib.hpp"

// RE Benchmark TU 12680 of 20000 (depth=28, stamp="default")
namespace bench_tu_12680 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12680>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12680
