#include "bench/fib.hpp"

// RE Benchmark TU 17437 of 20000 (depth=28, stamp="default")
namespace bench_tu_17437 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17437>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17437
