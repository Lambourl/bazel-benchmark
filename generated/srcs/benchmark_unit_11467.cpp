#include "bench/fib.hpp"

// RE Benchmark TU 11467 of 20000 (depth=28, stamp="default")
namespace bench_tu_11467 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11467>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11467
