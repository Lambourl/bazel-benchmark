#include "bench/fib.hpp"

// RE Benchmark TU 17338 of 20000 (depth=28, stamp="default")
namespace bench_tu_17338 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17338>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17338
