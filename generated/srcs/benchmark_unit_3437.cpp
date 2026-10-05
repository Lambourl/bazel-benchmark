#include "bench/fib.hpp"

// RE Benchmark TU 3437 of 20000 (depth=28, stamp="default")
namespace bench_tu_3437 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3437>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3437
