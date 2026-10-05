#include "bench/fib.hpp"

// RE Benchmark TU 18293 of 20000 (depth=28, stamp="default")
namespace bench_tu_18293 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18293>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18293
