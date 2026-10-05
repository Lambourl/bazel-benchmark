#include "bench/fib.hpp"

// RE Benchmark TU 13835 of 20000 (depth=28, stamp="default")
namespace bench_tu_13835 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13835>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13835
