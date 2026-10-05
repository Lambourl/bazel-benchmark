#include "bench/fib.hpp"

// RE Benchmark TU 7709 of 20000 (depth=28, stamp="default")
namespace bench_tu_7709 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7709>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7709
