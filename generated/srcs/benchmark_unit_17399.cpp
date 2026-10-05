#include "bench/fib.hpp"

// RE Benchmark TU 17399 of 20000 (depth=28, stamp="default")
namespace bench_tu_17399 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17399>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17399
