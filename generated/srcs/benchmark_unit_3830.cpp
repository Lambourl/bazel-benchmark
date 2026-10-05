#include "bench/fib.hpp"

// RE Benchmark TU 3830 of 20000 (depth=28, stamp="default")
namespace bench_tu_3830 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3830>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3830
