#include "bench/fib.hpp"

// RE Benchmark TU 6519 of 20000 (depth=28, stamp="default")
namespace bench_tu_6519 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6519>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6519
