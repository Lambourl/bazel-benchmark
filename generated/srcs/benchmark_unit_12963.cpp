#include "bench/fib.hpp"

// RE Benchmark TU 12963 of 20000 (depth=28, stamp="default")
namespace bench_tu_12963 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12963>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12963
