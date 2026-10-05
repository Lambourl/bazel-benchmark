#include "bench/fib.hpp"

// RE Benchmark TU 17640 of 20000 (depth=28, stamp="default")
namespace bench_tu_17640 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17640>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17640
