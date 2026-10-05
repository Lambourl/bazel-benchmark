#include "bench/fib.hpp"

// RE Benchmark TU 15959 of 20000 (depth=28, stamp="default")
namespace bench_tu_15959 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15959>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15959
