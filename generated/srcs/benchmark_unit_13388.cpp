#include "bench/fib.hpp"

// RE Benchmark TU 13388 of 20000 (depth=28, stamp="default")
namespace bench_tu_13388 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13388>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13388
