#include "bench/fib.hpp"

// RE Benchmark TU 15557 of 20000 (depth=28, stamp="default")
namespace bench_tu_15557 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15557>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15557
