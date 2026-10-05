#include "bench/fib.hpp"

// RE Benchmark TU 8463 of 20000 (depth=28, stamp="default")
namespace bench_tu_8463 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8463>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8463
