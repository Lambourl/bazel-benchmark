#include "bench/fib.hpp"

// RE Benchmark TU 16463 of 20000 (depth=28, stamp="default")
namespace bench_tu_16463 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16463>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16463
