#include "bench/fib.hpp"

// RE Benchmark TU 10089 of 20000 (depth=28, stamp="default")
namespace bench_tu_10089 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10089>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10089
