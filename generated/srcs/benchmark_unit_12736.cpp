#include "bench/fib.hpp"

// RE Benchmark TU 12736 of 20000 (depth=28, stamp="default")
namespace bench_tu_12736 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12736>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12736
