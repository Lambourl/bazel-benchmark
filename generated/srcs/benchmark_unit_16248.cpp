#include "bench/fib.hpp"

// RE Benchmark TU 16248 of 20000 (depth=28, stamp="default")
namespace bench_tu_16248 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16248>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16248
