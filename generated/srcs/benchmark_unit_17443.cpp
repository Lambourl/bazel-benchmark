#include "bench/fib.hpp"

// RE Benchmark TU 17443 of 20000 (depth=28, stamp="default")
namespace bench_tu_17443 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17443>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17443
