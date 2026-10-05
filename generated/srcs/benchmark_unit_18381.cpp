#include "bench/fib.hpp"

// RE Benchmark TU 18381 of 20000 (depth=28, stamp="default")
namespace bench_tu_18381 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18381>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18381
