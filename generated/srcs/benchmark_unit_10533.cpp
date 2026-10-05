#include "bench/fib.hpp"

// RE Benchmark TU 10533 of 20000 (depth=28, stamp="default")
namespace bench_tu_10533 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10533>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10533
