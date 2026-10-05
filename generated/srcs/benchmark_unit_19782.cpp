#include "bench/fib.hpp"

// RE Benchmark TU 19782 of 20000 (depth=28, stamp="default")
namespace bench_tu_19782 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19782>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19782
