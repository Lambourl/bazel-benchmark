#include "bench/fib.hpp"

// RE Benchmark TU 19381 of 20000 (depth=28, stamp="default")
namespace bench_tu_19381 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19381>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19381
