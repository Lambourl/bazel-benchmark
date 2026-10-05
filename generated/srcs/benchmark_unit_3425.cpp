#include "bench/fib.hpp"

// RE Benchmark TU 3425 of 20000 (depth=28, stamp="default")
namespace bench_tu_3425 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3425>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3425
