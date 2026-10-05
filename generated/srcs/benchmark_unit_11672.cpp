#include "bench/fib.hpp"

// RE Benchmark TU 11672 of 20000 (depth=28, stamp="default")
namespace bench_tu_11672 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11672>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11672
