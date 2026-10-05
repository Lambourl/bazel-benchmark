#include "bench/fib.hpp"

// RE Benchmark TU 16388 of 20000 (depth=28, stamp="default")
namespace bench_tu_16388 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16388>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16388
