#include "bench/fib.hpp"

// RE Benchmark TU 10256 of 20000 (depth=28, stamp="default")
namespace bench_tu_10256 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10256>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10256
