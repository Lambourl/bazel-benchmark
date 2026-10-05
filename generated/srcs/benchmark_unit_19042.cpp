#include "bench/fib.hpp"

// RE Benchmark TU 19042 of 20000 (depth=28, stamp="default")
namespace bench_tu_19042 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19042>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19042
