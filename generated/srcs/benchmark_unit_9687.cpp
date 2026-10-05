#include "bench/fib.hpp"

// RE Benchmark TU 9687 of 20000 (depth=28, stamp="default")
namespace bench_tu_9687 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9687>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9687
