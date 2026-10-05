#include "bench/fib.hpp"

// RE Benchmark TU 3745 of 20000 (depth=28, stamp="default")
namespace bench_tu_3745 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3745>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3745
