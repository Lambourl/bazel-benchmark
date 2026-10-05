#include "bench/fib.hpp"

// RE Benchmark TU 3266 of 20000 (depth=28, stamp="default")
namespace bench_tu_3266 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3266>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3266
