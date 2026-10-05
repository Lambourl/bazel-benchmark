#include "bench/fib.hpp"

// RE Benchmark TU 7563 of 20000 (depth=28, stamp="default")
namespace bench_tu_7563 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7563>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7563
