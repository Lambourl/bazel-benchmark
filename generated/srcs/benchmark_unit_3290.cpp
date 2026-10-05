#include "bench/fib.hpp"

// RE Benchmark TU 3290 of 20000 (depth=28, stamp="default")
namespace bench_tu_3290 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3290>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3290
