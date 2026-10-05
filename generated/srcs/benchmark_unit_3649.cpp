#include "bench/fib.hpp"

// RE Benchmark TU 3649 of 20000 (depth=28, stamp="default")
namespace bench_tu_3649 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3649>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3649
