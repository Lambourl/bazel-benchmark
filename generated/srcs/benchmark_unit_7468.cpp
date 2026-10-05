#include "bench/fib.hpp"

// RE Benchmark TU 7468 of 20000 (depth=28, stamp="default")
namespace bench_tu_7468 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7468>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7468
