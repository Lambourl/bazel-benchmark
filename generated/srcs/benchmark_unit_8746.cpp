#include "bench/fib.hpp"

// RE Benchmark TU 8746 of 20000 (depth=28, stamp="default")
namespace bench_tu_8746 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8746>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8746
