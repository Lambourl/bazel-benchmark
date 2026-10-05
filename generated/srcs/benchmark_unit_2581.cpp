#include "bench/fib.hpp"

// RE Benchmark TU 2581 of 20000 (depth=28, stamp="default")
namespace bench_tu_2581 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2581>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2581
