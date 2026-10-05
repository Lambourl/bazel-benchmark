#include "bench/fib.hpp"

// RE Benchmark TU 19025 of 20000 (depth=28, stamp="default")
namespace bench_tu_19025 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19025>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19025
