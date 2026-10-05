#include "bench/fib.hpp"

// RE Benchmark TU 14042 of 20000 (depth=28, stamp="default")
namespace bench_tu_14042 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14042>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14042
