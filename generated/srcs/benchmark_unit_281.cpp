#include "bench/fib.hpp"

// RE Benchmark TU 281 of 20000 (depth=28, stamp="default")
namespace bench_tu_281 {
constexpr unsigned long long result = ::bench::slow_fib<28, 281>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_281
