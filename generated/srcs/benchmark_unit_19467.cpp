#include "bench/fib.hpp"

// RE Benchmark TU 19467 of 20000 (depth=28, stamp="default")
namespace bench_tu_19467 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19467>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19467
