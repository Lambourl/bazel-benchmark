#include "bench/fib.hpp"

// RE Benchmark TU 16253 of 20000 (depth=28, stamp="default")
namespace bench_tu_16253 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16253>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16253
