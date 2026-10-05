#include "bench/fib.hpp"

// RE Benchmark TU 12399 of 20000 (depth=28, stamp="default")
namespace bench_tu_12399 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12399>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12399
