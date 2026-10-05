#include "bench/fib.hpp"

// RE Benchmark TU 5617 of 20000 (depth=28, stamp="default")
namespace bench_tu_5617 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5617>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5617
