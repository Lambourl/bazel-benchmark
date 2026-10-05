#include "bench/fib.hpp"

// RE Benchmark TU 6758 of 20000 (depth=28, stamp="default")
namespace bench_tu_6758 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6758>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6758
