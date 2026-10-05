#include "bench/fib.hpp"

// RE Benchmark TU 7767 of 20000 (depth=28, stamp="default")
namespace bench_tu_7767 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7767>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7767
