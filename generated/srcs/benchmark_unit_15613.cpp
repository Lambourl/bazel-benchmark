#include "bench/fib.hpp"

// RE Benchmark TU 15613 of 20000 (depth=28, stamp="default")
namespace bench_tu_15613 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15613>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15613
