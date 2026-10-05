#include "bench/fib.hpp"

// RE Benchmark TU 11551 of 20000 (depth=28, stamp="default")
namespace bench_tu_11551 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11551>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11551
