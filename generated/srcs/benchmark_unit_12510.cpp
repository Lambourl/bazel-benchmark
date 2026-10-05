#include "bench/fib.hpp"

// RE Benchmark TU 12510 of 20000 (depth=28, stamp="default")
namespace bench_tu_12510 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12510>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12510
