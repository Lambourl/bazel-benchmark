#include "bench/fib.hpp"

// RE Benchmark TU 13830 of 20000 (depth=28, stamp="default")
namespace bench_tu_13830 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13830>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13830
