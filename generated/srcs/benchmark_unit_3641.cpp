#include "bench/fib.hpp"

// RE Benchmark TU 3641 of 20000 (depth=28, stamp="default")
namespace bench_tu_3641 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3641>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3641
