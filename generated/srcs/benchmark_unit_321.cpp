#include "bench/fib.hpp"

// RE Benchmark TU 321 of 20000 (depth=28, stamp="default")
namespace bench_tu_321 {
constexpr unsigned long long result = ::bench::slow_fib<28, 321>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_321
