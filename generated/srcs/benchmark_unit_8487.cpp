#include "bench/fib.hpp"

// RE Benchmark TU 8487 of 20000 (depth=28, stamp="default")
namespace bench_tu_8487 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8487>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8487
