#include "bench/fib.hpp"

// RE Benchmark TU 10555 of 20000 (depth=28, stamp="default")
namespace bench_tu_10555 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10555>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10555
