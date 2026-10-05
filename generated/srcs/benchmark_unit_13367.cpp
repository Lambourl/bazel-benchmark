#include "bench/fib.hpp"

// RE Benchmark TU 13367 of 20000 (depth=28, stamp="default")
namespace bench_tu_13367 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13367>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13367
