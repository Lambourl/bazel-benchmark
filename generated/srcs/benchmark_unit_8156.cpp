#include "bench/fib.hpp"

// RE Benchmark TU 8156 of 20000 (depth=28, stamp="default")
namespace bench_tu_8156 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8156>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8156
