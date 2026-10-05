#include "bench/fib.hpp"

// RE Benchmark TU 1953 of 20000 (depth=28, stamp="default")
namespace bench_tu_1953 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1953>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1953
