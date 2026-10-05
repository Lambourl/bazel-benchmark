#include "bench/fib.hpp"

// RE Benchmark TU 14663 of 20000 (depth=28, stamp="default")
namespace bench_tu_14663 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14663>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14663
