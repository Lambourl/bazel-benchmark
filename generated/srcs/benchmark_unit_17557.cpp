#include "bench/fib.hpp"

// RE Benchmark TU 17557 of 20000 (depth=28, stamp="default")
namespace bench_tu_17557 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17557>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17557
