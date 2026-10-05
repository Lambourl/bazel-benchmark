#include "bench/fib.hpp"

// RE Benchmark TU 766 of 20000 (depth=28, stamp="default")
namespace bench_tu_766 {
constexpr unsigned long long result = ::bench::slow_fib<28, 766>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_766
