#include "bench/fib.hpp"

// RE Benchmark TU 13379 of 20000 (depth=28, stamp="default")
namespace bench_tu_13379 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13379>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13379
