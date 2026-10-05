#include "bench/fib.hpp"

// RE Benchmark TU 15486 of 20000 (depth=28, stamp="default")
namespace bench_tu_15486 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15486>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15486
