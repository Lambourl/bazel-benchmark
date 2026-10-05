#include "bench/fib.hpp"

// RE Benchmark TU 17458 of 20000 (depth=28, stamp="default")
namespace bench_tu_17458 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17458>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17458
