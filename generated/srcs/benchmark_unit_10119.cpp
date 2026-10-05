#include "bench/fib.hpp"

// RE Benchmark TU 10119 of 20000 (depth=28, stamp="default")
namespace bench_tu_10119 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10119>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10119
