#include "bench/fib.hpp"

// RE Benchmark TU 16467 of 20000 (depth=28, stamp="default")
namespace bench_tu_16467 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16467>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16467
