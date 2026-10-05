#include "bench/fib.hpp"

// RE Benchmark TU 140 of 20000 (depth=28, stamp="default")
namespace bench_tu_140 {
constexpr unsigned long long result = ::bench::slow_fib<28, 140>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_140
