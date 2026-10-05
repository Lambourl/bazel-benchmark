#include "bench/fib.hpp"

// RE Benchmark TU 7441 of 20000 (depth=28, stamp="default")
namespace bench_tu_7441 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7441>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7441
