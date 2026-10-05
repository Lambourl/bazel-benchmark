#include "bench/fib.hpp"

// RE Benchmark TU 8627 of 20000 (depth=28, stamp="default")
namespace bench_tu_8627 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8627>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8627
