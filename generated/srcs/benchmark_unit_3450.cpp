#include "bench/fib.hpp"

// RE Benchmark TU 3450 of 20000 (depth=28, stamp="default")
namespace bench_tu_3450 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3450>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3450
