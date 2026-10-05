#include "bench/fib.hpp"

// RE Benchmark TU 17648 of 20000 (depth=28, stamp="default")
namespace bench_tu_17648 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17648>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17648
