#include "bench/fib.hpp"

// RE Benchmark TU 3810 of 20000 (depth=28, stamp="default")
namespace bench_tu_3810 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3810>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3810
