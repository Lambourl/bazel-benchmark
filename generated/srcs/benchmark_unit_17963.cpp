#include "bench/fib.hpp"

// RE Benchmark TU 17963 of 20000 (depth=28, stamp="default")
namespace bench_tu_17963 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17963>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17963
