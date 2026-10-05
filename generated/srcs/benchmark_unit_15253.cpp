#include "bench/fib.hpp"

// RE Benchmark TU 15253 of 20000 (depth=28, stamp="default")
namespace bench_tu_15253 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15253>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15253
