#include "bench/fib.hpp"

// RE Benchmark TU 10959 of 20000 (depth=28, stamp="default")
namespace bench_tu_10959 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10959>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10959
