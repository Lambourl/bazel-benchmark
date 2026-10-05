#include "bench/fib.hpp"

// RE Benchmark TU 13881 of 20000 (depth=28, stamp="default")
namespace bench_tu_13881 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13881>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13881
