#include "bench/fib.hpp"

// RE Benchmark TU 8830 of 20000 (depth=28, stamp="default")
namespace bench_tu_8830 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8830>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8830
