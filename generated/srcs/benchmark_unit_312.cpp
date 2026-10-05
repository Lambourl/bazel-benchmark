#include "bench/fib.hpp"

// RE Benchmark TU 312 of 20000 (depth=28, stamp="default")
namespace bench_tu_312 {
constexpr unsigned long long result = ::bench::slow_fib<28, 312>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_312
