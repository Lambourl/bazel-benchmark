#include "bench/fib.hpp"

// RE Benchmark TU 3216 of 20000 (depth=28, stamp="default")
namespace bench_tu_3216 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3216>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3216
