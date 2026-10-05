#include "bench/fib.hpp"

// RE Benchmark TU 1784 of 20000 (depth=28, stamp="default")
namespace bench_tu_1784 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1784>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1784
