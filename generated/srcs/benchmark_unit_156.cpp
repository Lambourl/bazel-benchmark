#include "bench/fib.hpp"

// RE Benchmark TU 156 of 20000 (depth=28, stamp="default")
namespace bench_tu_156 {
constexpr unsigned long long result = ::bench::slow_fib<28, 156>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_156
