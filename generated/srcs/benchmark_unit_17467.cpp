#include "bench/fib.hpp"

// RE Benchmark TU 17467 of 20000 (depth=28, stamp="default")
namespace bench_tu_17467 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17467>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17467
