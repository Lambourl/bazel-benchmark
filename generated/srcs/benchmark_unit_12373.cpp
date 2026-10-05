#include "bench/fib.hpp"

// RE Benchmark TU 12373 of 20000 (depth=28, stamp="default")
namespace bench_tu_12373 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12373>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12373
