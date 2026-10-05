#include "bench/fib.hpp"

// RE Benchmark TU 7774 of 20000 (depth=28, stamp="default")
namespace bench_tu_7774 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7774>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7774
