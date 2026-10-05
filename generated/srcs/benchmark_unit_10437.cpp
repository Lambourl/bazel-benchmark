#include "bench/fib.hpp"

// RE Benchmark TU 10437 of 20000 (depth=28, stamp="default")
namespace bench_tu_10437 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10437>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10437
