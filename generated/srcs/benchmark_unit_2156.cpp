#include "bench/fib.hpp"

// RE Benchmark TU 2156 of 20000 (depth=28, stamp="default")
namespace bench_tu_2156 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2156>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2156
