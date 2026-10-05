#include "bench/fib.hpp"

// RE Benchmark TU 2117 of 20000 (depth=28, stamp="default")
namespace bench_tu_2117 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2117>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2117
