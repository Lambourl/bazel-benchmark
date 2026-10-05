#include "bench/fib.hpp"

// RE Benchmark TU 1735 of 20000 (depth=28, stamp="default")
namespace bench_tu_1735 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1735>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1735
