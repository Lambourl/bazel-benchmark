#include "bench/fib.hpp"

// RE Benchmark TU 297 of 20000 (depth=28, stamp="default")
namespace bench_tu_297 {
constexpr unsigned long long result = ::bench::slow_fib<28, 297>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_297
