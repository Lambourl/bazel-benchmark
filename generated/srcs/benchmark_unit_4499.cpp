#include "bench/fib.hpp"

// RE Benchmark TU 4499 of 20000 (depth=28, stamp="default")
namespace bench_tu_4499 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4499>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4499
