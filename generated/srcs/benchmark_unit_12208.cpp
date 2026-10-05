#include "bench/fib.hpp"

// RE Benchmark TU 12208 of 20000 (depth=28, stamp="default")
namespace bench_tu_12208 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12208>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12208
