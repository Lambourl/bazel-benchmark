#include "bench/fib.hpp"

// RE Benchmark TU 591 of 20000 (depth=28, stamp="default")
namespace bench_tu_591 {
constexpr unsigned long long result = ::bench::slow_fib<28, 591>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_591
