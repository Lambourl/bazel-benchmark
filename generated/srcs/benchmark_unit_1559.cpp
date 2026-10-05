#include "bench/fib.hpp"

// RE Benchmark TU 1559 of 20000 (depth=28, stamp="default")
namespace bench_tu_1559 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1559>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1559
