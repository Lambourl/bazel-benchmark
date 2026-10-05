#include "bench/fib.hpp"

// RE Benchmark TU 8766 of 20000 (depth=28, stamp="default")
namespace bench_tu_8766 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8766>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8766
