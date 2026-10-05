#include "bench/fib.hpp"

// RE Benchmark TU 6671 of 20000 (depth=28, stamp="default")
namespace bench_tu_6671 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6671>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6671
