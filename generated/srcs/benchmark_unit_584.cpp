#include "bench/fib.hpp"

// RE Benchmark TU 584 of 20000 (depth=28, stamp="default")
namespace bench_tu_584 {
constexpr unsigned long long result = ::bench::slow_fib<28, 584>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_584
