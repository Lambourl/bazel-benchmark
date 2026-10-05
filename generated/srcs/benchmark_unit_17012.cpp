#include "bench/fib.hpp"

// RE Benchmark TU 17012 of 20000 (depth=28, stamp="default")
namespace bench_tu_17012 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17012>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17012
