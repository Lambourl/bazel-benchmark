#include "bench/fib.hpp"

// RE Benchmark TU 5820 of 20000 (depth=28, stamp="default")
namespace bench_tu_5820 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5820>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5820
