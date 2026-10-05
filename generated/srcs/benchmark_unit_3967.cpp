#include "bench/fib.hpp"

// RE Benchmark TU 3967 of 20000 (depth=28, stamp="default")
namespace bench_tu_3967 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3967>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3967
