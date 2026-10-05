#include "bench/fib.hpp"

// RE Benchmark TU 9295 of 20000 (depth=28, stamp="default")
namespace bench_tu_9295 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9295>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9295
