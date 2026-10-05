#include "bench/fib.hpp"

// RE Benchmark TU 15834 of 20000 (depth=28, stamp="default")
namespace bench_tu_15834 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15834>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15834
