#include "bench/fib.hpp"

// RE Benchmark TU 7246 of 20000 (depth=28, stamp="default")
namespace bench_tu_7246 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7246>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7246
