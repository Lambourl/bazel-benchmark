#include "bench/fib.hpp"

// RE Benchmark TU 10427 of 20000 (depth=28, stamp="default")
namespace bench_tu_10427 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10427>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10427
