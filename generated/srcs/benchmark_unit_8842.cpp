#include "bench/fib.hpp"

// RE Benchmark TU 8842 of 20000 (depth=28, stamp="default")
namespace bench_tu_8842 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8842>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8842
