#include "bench/fib.hpp"

// RE Benchmark TU 9033 of 20000 (depth=28, stamp="default")
namespace bench_tu_9033 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9033>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9033
