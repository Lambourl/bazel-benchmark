#include "bench/fib.hpp"

// RE Benchmark TU 17709 of 20000 (depth=28, stamp="default")
namespace bench_tu_17709 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17709>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17709
