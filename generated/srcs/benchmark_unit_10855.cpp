#include "bench/fib.hpp"

// RE Benchmark TU 10855 of 20000 (depth=28, stamp="default")
namespace bench_tu_10855 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10855>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10855
