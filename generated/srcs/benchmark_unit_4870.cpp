#include "bench/fib.hpp"

// RE Benchmark TU 4870 of 20000 (depth=28, stamp="default")
namespace bench_tu_4870 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4870>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4870
