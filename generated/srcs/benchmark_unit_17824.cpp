#include "bench/fib.hpp"

// RE Benchmark TU 17824 of 20000 (depth=28, stamp="default")
namespace bench_tu_17824 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17824>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17824
