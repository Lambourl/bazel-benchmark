#include "bench/fib.hpp"

// RE Benchmark TU 18404 of 20000 (depth=28, stamp="default")
namespace bench_tu_18404 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18404>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18404
