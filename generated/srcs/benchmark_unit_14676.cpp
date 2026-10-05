#include "bench/fib.hpp"

// RE Benchmark TU 14676 of 20000 (depth=28, stamp="default")
namespace bench_tu_14676 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14676>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14676
