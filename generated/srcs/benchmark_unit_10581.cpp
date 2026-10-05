#include "bench/fib.hpp"

// RE Benchmark TU 10581 of 20000 (depth=28, stamp="default")
namespace bench_tu_10581 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10581>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10581
