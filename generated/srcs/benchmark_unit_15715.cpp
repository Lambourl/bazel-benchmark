#include "bench/fib.hpp"

// RE Benchmark TU 15715 of 20000 (depth=28, stamp="default")
namespace bench_tu_15715 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15715>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15715
