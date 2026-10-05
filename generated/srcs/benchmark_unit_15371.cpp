#include "bench/fib.hpp"

// RE Benchmark TU 15371 of 20000 (depth=28, stamp="default")
namespace bench_tu_15371 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15371>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15371
