#include "bench/fib.hpp"

// RE Benchmark TU 15411 of 20000 (depth=28, stamp="default")
namespace bench_tu_15411 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15411>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15411
