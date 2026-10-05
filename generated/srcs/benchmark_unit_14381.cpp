#include "bench/fib.hpp"

// RE Benchmark TU 14381 of 20000 (depth=28, stamp="default")
namespace bench_tu_14381 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14381>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14381
