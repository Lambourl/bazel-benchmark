#include "bench/fib.hpp"

// RE Benchmark TU 10327 of 20000 (depth=28, stamp="default")
namespace bench_tu_10327 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10327>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10327
