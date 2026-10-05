#include "bench/fib.hpp"

// RE Benchmark TU 6683 of 20000 (depth=28, stamp="default")
namespace bench_tu_6683 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6683>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6683
