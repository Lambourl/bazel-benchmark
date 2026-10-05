#include "bench/fib.hpp"

// RE Benchmark TU 17598 of 20000 (depth=28, stamp="default")
namespace bench_tu_17598 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17598>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17598
