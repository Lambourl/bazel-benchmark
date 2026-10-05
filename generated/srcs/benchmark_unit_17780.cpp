#include "bench/fib.hpp"

// RE Benchmark TU 17780 of 20000 (depth=28, stamp="default")
namespace bench_tu_17780 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17780>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17780
