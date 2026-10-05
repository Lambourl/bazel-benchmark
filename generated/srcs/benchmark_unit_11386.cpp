#include "bench/fib.hpp"

// RE Benchmark TU 11386 of 20000 (depth=28, stamp="default")
namespace bench_tu_11386 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11386>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11386
