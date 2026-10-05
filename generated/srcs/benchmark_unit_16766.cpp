#include "bench/fib.hpp"

// RE Benchmark TU 16766 of 20000 (depth=28, stamp="default")
namespace bench_tu_16766 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16766>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16766
