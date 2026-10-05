#include "bench/fib.hpp"

// RE Benchmark TU 17285 of 20000 (depth=28, stamp="default")
namespace bench_tu_17285 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17285>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17285
