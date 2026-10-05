#include "bench/fib.hpp"

// RE Benchmark TU 10354 of 20000 (depth=28, stamp="default")
namespace bench_tu_10354 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10354>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10354
