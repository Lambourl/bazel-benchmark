#include "bench/fib.hpp"

// RE Benchmark TU 19519 of 20000 (depth=28, stamp="default")
namespace bench_tu_19519 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19519>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19519
