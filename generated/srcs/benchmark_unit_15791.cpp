#include "bench/fib.hpp"

// RE Benchmark TU 15791 of 20000 (depth=28, stamp="default")
namespace bench_tu_15791 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15791>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15791
