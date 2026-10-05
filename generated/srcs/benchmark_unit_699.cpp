#include "bench/fib.hpp"

// RE Benchmark TU 699 of 20000 (depth=28, stamp="default")
namespace bench_tu_699 {
constexpr unsigned long long result = ::bench::slow_fib<28, 699>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_699
