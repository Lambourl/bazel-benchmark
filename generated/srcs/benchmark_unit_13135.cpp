#include "bench/fib.hpp"

// RE Benchmark TU 13135 of 20000 (depth=28, stamp="default")
namespace bench_tu_13135 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13135>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13135
