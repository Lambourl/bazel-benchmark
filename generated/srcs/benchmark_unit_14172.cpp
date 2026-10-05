#include "bench/fib.hpp"

// RE Benchmark TU 14172 of 20000 (depth=28, stamp="default")
namespace bench_tu_14172 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14172>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14172
