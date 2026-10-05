#include "bench/fib.hpp"

// RE Benchmark TU 7833 of 20000 (depth=28, stamp="default")
namespace bench_tu_7833 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7833>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7833
