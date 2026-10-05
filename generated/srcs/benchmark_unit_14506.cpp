#include "bench/fib.hpp"

// RE Benchmark TU 14506 of 20000 (depth=28, stamp="default")
namespace bench_tu_14506 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14506>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14506
