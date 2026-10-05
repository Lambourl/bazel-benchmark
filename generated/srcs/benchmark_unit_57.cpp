#include "bench/fib.hpp"

// RE Benchmark TU 57 of 20000 (depth=28, stamp="default")
namespace bench_tu_57 {
constexpr unsigned long long result = ::bench::slow_fib<28, 57>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_57
