#include "bench/fib.hpp"

// RE Benchmark TU 3259 of 20000 (depth=28, stamp="default")
namespace bench_tu_3259 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3259>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3259
