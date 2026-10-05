#include "bench/fib.hpp"

// RE Benchmark TU 11715 of 20000 (depth=28, stamp="default")
namespace bench_tu_11715 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11715>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11715
