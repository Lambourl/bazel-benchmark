#include "bench/fib.hpp"

// RE Benchmark TU 6293 of 20000 (depth=28, stamp="default")
namespace bench_tu_6293 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6293>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6293
