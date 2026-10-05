#include "bench/fib.hpp"

// RE Benchmark TU 14619 of 20000 (depth=28, stamp="default")
namespace bench_tu_14619 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14619>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14619
