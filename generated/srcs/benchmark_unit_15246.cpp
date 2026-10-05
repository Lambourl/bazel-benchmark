#include "bench/fib.hpp"

// RE Benchmark TU 15246 of 20000 (depth=28, stamp="default")
namespace bench_tu_15246 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15246>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15246
