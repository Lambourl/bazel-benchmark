#include "bench/fib.hpp"

// RE Benchmark TU 14383 of 20000 (depth=28, stamp="default")
namespace bench_tu_14383 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14383>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14383
