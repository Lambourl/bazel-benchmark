#include "bench/fib.hpp"

// RE Benchmark TU 19855 of 20000 (depth=28, stamp="default")
namespace bench_tu_19855 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19855>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19855
