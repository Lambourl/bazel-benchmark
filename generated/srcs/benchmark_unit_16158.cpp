#include "bench/fib.hpp"

// RE Benchmark TU 16158 of 20000 (depth=28, stamp="default")
namespace bench_tu_16158 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16158>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16158
