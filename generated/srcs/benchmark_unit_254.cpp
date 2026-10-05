#include "bench/fib.hpp"

// RE Benchmark TU 254 of 20000 (depth=28, stamp="default")
namespace bench_tu_254 {
constexpr unsigned long long result = ::bench::slow_fib<28, 254>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_254
