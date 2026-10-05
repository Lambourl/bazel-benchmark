#include "bench/fib.hpp"

// RE Benchmark TU 12593 of 20000 (depth=28, stamp="default")
namespace bench_tu_12593 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12593>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12593
