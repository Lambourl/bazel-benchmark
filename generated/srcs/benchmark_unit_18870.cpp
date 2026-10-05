#include "bench/fib.hpp"

// RE Benchmark TU 18870 of 20000 (depth=28, stamp="default")
namespace bench_tu_18870 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18870>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18870
