#include "bench/fib.hpp"

// RE Benchmark TU 11367 of 20000 (depth=28, stamp="default")
namespace bench_tu_11367 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11367>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11367
