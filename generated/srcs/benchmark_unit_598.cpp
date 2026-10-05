#include "bench/fib.hpp"

// RE Benchmark TU 598 of 20000 (depth=28, stamp="default")
namespace bench_tu_598 {
constexpr unsigned long long result = ::bench::slow_fib<28, 598>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_598
