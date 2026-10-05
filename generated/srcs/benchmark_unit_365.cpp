#include "bench/fib.hpp"

// RE Benchmark TU 365 of 20000 (depth=28, stamp="default")
namespace bench_tu_365 {
constexpr unsigned long long result = ::bench::slow_fib<28, 365>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_365
