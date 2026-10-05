#include "bench/fib.hpp"

// RE Benchmark TU 5208 of 20000 (depth=28, stamp="default")
namespace bench_tu_5208 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5208>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5208
