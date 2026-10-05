#include "bench/fib.hpp"

// RE Benchmark TU 1967 of 20000 (depth=28, stamp="default")
namespace bench_tu_1967 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1967>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1967
