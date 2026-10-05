#include "bench/fib.hpp"

// RE Benchmark TU 15468 of 20000 (depth=28, stamp="default")
namespace bench_tu_15468 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15468>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15468
