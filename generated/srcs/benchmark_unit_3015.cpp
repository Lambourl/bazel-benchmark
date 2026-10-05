#include "bench/fib.hpp"

// RE Benchmark TU 3015 of 20000 (depth=28, stamp="default")
namespace bench_tu_3015 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3015>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3015
