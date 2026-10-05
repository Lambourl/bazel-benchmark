#include "bench/fib.hpp"

// RE Benchmark TU 1578 of 20000 (depth=28, stamp="default")
namespace bench_tu_1578 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1578>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1578
