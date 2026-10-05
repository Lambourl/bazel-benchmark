#include "bench/fib.hpp"

// RE Benchmark TU 8519 of 20000 (depth=28, stamp="default")
namespace bench_tu_8519 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8519>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8519
