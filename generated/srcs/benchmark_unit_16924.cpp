#include "bench/fib.hpp"

// RE Benchmark TU 16924 of 20000 (depth=28, stamp="default")
namespace bench_tu_16924 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16924>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16924
