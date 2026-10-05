#include "bench/fib.hpp"

// RE Benchmark TU 3045 of 20000 (depth=28, stamp="default")
namespace bench_tu_3045 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3045>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3045
