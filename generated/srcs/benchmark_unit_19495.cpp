#include "bench/fib.hpp"

// RE Benchmark TU 19495 of 20000 (depth=28, stamp="default")
namespace bench_tu_19495 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19495>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19495
