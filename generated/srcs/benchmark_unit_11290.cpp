#include "bench/fib.hpp"

// RE Benchmark TU 11290 of 20000 (depth=28, stamp="default")
namespace bench_tu_11290 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11290>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11290
