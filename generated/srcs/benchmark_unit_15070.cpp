#include "bench/fib.hpp"

// RE Benchmark TU 15070 of 20000 (depth=28, stamp="default")
namespace bench_tu_15070 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15070>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15070
