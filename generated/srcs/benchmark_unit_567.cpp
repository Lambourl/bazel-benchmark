#include "bench/fib.hpp"

// RE Benchmark TU 567 of 20000 (depth=28, stamp="default")
namespace bench_tu_567 {
constexpr unsigned long long result = ::bench::slow_fib<28, 567>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_567
