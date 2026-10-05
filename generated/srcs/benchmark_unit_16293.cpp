#include "bench/fib.hpp"

// RE Benchmark TU 16293 of 20000 (depth=28, stamp="default")
namespace bench_tu_16293 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16293>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16293
