#include "bench/fib.hpp"

// RE Benchmark TU 10418 of 20000 (depth=28, stamp="default")
namespace bench_tu_10418 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10418>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10418
