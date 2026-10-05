#include "bench/fib.hpp"

// RE Benchmark TU 12070 of 20000 (depth=28, stamp="default")
namespace bench_tu_12070 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12070>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12070
