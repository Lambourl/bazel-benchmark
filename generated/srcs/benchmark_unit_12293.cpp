#include "bench/fib.hpp"

// RE Benchmark TU 12293 of 20000 (depth=28, stamp="default")
namespace bench_tu_12293 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12293>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12293
