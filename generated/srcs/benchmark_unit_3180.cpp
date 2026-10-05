#include "bench/fib.hpp"

// RE Benchmark TU 3180 of 20000 (depth=28, stamp="default")
namespace bench_tu_3180 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3180>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3180
