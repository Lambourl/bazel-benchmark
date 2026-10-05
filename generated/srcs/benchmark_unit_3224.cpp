#include "bench/fib.hpp"

// RE Benchmark TU 3224 of 20000 (depth=28, stamp="default")
namespace bench_tu_3224 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3224>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3224
