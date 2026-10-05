#include "bench/fib.hpp"

// RE Benchmark TU 19004 of 20000 (depth=28, stamp="default")
namespace bench_tu_19004 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19004>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19004
