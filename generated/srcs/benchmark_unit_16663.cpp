#include "bench/fib.hpp"

// RE Benchmark TU 16663 of 20000 (depth=28, stamp="default")
namespace bench_tu_16663 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16663>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16663
