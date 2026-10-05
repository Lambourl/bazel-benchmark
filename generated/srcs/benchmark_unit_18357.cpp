#include "bench/fib.hpp"

// RE Benchmark TU 18357 of 20000 (depth=28, stamp="default")
namespace bench_tu_18357 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18357>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18357
