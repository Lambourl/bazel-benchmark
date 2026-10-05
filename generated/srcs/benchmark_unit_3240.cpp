#include "bench/fib.hpp"

// RE Benchmark TU 3240 of 20000 (depth=28, stamp="default")
namespace bench_tu_3240 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3240>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3240
