#include "bench/fib.hpp"

// RE Benchmark TU 4494 of 20000 (depth=28, stamp="default")
namespace bench_tu_4494 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4494>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4494
