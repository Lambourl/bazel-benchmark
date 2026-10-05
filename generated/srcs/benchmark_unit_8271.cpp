#include "bench/fib.hpp"

// RE Benchmark TU 8271 of 20000 (depth=28, stamp="default")
namespace bench_tu_8271 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8271>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8271
