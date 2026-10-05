#include "bench/fib.hpp"

// RE Benchmark TU 8285 of 20000 (depth=28, stamp="default")
namespace bench_tu_8285 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8285>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8285
